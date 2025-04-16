#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    int numbers[] = {10, 20, 30, 40, 50};  // Array of integers
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Open file in binary write mode ("wb" means write binary)
    file = fopen("data.bin", "wb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write the entire array to the file
    fwrite(numbers, sizeof(int), size, file);

    // Close the file
    fclose(file);

    printf("Binary file written successfully!\n");
    return 0;
}

