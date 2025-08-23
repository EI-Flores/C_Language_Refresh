#include <stdio.h>
#include <limits.h>   // Integer limits
#include <float.h>    // Float limits

int main() {
    // =====================
    // Basic Variables
    // =====================
    int age = 30;               // Integer
    float height = 1.75f;       // Float (f)
    double weight = 72.5;       // Double
    char grade = 'A';           // Character
    char name[] = "Juan";       // String

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.2f m\n", height);
    printf("Weight: %.2lf kg\n", weight);
    printf("Grade: %c\n", grade);

    // =====================
    // TType Sizes
    // =====================
    printf("\n--- Type Sizes (bytes) ---\n");
    printf("int: %zu\n", sizeof(int));
    printf("float: %zu\n", sizeof(float));
    printf("double: %zu\n", sizeof(double));
    printf("char: %zu\n", sizeof(char));

    // =====================
    // Integer Linits
    // =====================
    printf("\n--- Integer Limits ---\n");
    printf("INT_MIN: %d\n", INT_MIN);
    printf("INT_MAX: %d\n", INT_MAX);
    printf("UNSIGNED INT MAX: %u\n", UINT_MAX);

    // =====================
    // Floating Point Limits
    // =====================
    printf("\n--- Floating Point Limits ---\n");
    printf("FLT_MIN: %e\n", FLT_MIN);
    printf("FLT_MAX: %e\n", FLT_MAX);
    printf("DBL_MIN: %e\n", DBL_MIN);
    printf("DBL_MAX: %e\n", DBL_MAX);

    return 0;
}
