#include <stdio.h>
#include <string.h>  // For string functions: strlen, strcpy, strcmp

int main() {
    // =====================
    // Arrays of integers
    // =====================
    int numbers[5] = {10, 20, 30, 40, 50};

    printf("== Integer Array ==\n");
    for (int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    // Modify array element
    numbers[2] = 99;
    printf("After modification: numbers[2] = %d\n", numbers[2]);

    // =====================
    // Strings (character arrays)
    // =====================
    char name[20] = "Juan";
    printf("\n== String Example ==\n");
    printf("Original name: %s\n", name);

    // String length
    printf("Length of name: %zu\n", strlen(name));

    // Copy string
    char anotherName[20];
    strcpy(anotherName, name);
    printf("Copied name: %s\n", anotherName);

    // Compare strings
    if (strcmp(name, anotherName) == 0) {
        printf("Strings are equal\n");
    }

    // =====================
    // 2D Arrays (Matrix)
    // =====================
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("\n== 2D Array (Matrix) ==\n");
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++) {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}
