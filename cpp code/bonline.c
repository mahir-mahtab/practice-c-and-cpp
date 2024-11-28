#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    // Input array
    int nums[1000];  // Using fixed size array
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    // Sort array using bubble sort
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(nums[j] > nums[j+1]) {
                // Swap
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
    
    // Store results in 2D array
    int result[1000][3];  // Maximum 1000 triplets
    int resultCount = 0;
    
    printf("[");
    
    // Find triplets
    for(int i = 0; i < n-2; i++) {
        // Skip duplicates for i
        if(i > 0 && nums[i] == nums[i-1]) {
            continue;
        }
        
        int left = i + 1;
        int right = n - 1;
        
        while(left < right) {
            // Use long long to prevent integer overflow
            long long sum = (long long)nums[i] + nums[left] + nums[right];
            if(sum == 0) {
                // Store result
                result[resultCount][0] = nums[i];
                result[resultCount][1] = nums[left];
                result[resultCount][2] = nums[right];
                
                // Print result
                if(resultCount > 0) {
                    printf(", ");
                }
                printf("[%d,%d,%d]", nums[i], nums[left], nums[right]);
                resultCount++;
                
                // Skip duplicates for left and right
                while(left < right && nums[left] == nums[left+1]) left++;
                while(left < right && nums[right] == nums[right-1]) right--;
                
                left++;
                right--;
            }
            else if(sum < 0) {
                left++;
            }
            else {
                right--;
            }
        }
    }
    
    printf("]\n");
    
    return 0;
}