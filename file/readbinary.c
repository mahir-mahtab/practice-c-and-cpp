#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    int numbers[5];  // Array to store data

    // Open file in binary read mode ("rb" means read binary)
    file = fopen("data.bin", "rb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read data from the binary file
    fread(numbers, sizeof(int), 5, file);

    // Close the file
    fclose(file);

    // Print the data
    printf("Data read from binary file:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
