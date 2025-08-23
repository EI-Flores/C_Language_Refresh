#include <stdio.h>

int main() {
    // =====================
    // Basic pointer example
    // =====================
    int a = 42;
    int *p;         // Declare a pointer to int
    p = &a;         // Store the address of variable 'a'

    printf("== Basic Pointer ==\n");
    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", (void*)&a);
    printf("Pointer p (address of a): %p\n", (void*)p);
    printf("Value pointed by p: %d\n", *p); // Dereference

    // =====================
    // Pointer and arrays
    // =====================
    int numbers[5] = {10, 20, 30, 40, 50};
    int *ptr = numbers; // Equivalent to &numbers[0]

    printf("\n== Pointers and Arrays ==\n");
    for (int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d (via pointer: %d)\n", i, numbers[i], *(ptr + i));
    }

    // =====================
    // Pointer arithmetic
    // =====================
    printf("\n== Pointer Arithmetic ==\n");
    printf("First element: %d\n", *ptr);        // numbers[0]
    printf("Second element: %d\n", *(ptr + 1)); // numbers[1]
    printf("Third element: %d\n", *(ptr + 2));  // numbers[2]

    // =====================
    // Changing values through pointers
    // =====================
    printf("\n== Modify Array Through Pointer ==\n");
    *(ptr + 2) = 99; // Modify numbers[2]
    printf("numbers[2] after modification: %d\n", numbers[2]);

    return 0;
}
