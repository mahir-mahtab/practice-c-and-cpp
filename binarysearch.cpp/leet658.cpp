

class Solution
{
public:
    vector<int> findClosestElements(vector<int> &arr, int k, int x)
    {
        vector<int>a; 
        int n = arr.size();
        int low = 0, high = n - 1, flag = 0,mid;
        while (high >= low)
        {
            mid = low + (high - low) / 2;
            if (arr[mid] == x)
            {
                flag = 1;
                break;
            }
            else if (arr[mid] > x)
                high = mid - 1;
            else
                low = mid + 1;
        }
        int newflag=0;
        if (flag==1){
            int l=mid-1;
            int h=mid+1;
            a.push_back(x);
           

            while(k--){
                
                if(l>=0&&h<=(n-1)){
                    if(x-arr[l]<=arr[h]-x){
                        a.push_back(arr[l]);
                        l--;
                    }
                    else {
                        a.push_back(arr[h]);
                        h++;
                    }
                }
                else if(l<0){
                    a.push_back(arr[h]);
                    h++;
                }
                else if(h>(n-1)){
                    a.push_back(arr[l]);
                    l--;
                }
            }
            }


        
        else if (flag==0){
            int l=high;
            int h=low;
            while(k--){
                if(l>=0&&h<=(n-1)){
                    if(x-arr[l]>=arr[h]-x){
                        a.push_back(arr[l]);
                        l--;
                    }
                    else {
                        a.push_back(arr[h]);
                        h++;
                    }
                }
                else if(l<0){
                    a.push_back(arr[h]);
                    h++;
                }
                else if(h>(n-1)){
                    a.push_back(arr[l]);
                    l--;
                }
            }


        }
        sort(a.begin(),a.end());

            return a;
    }
};