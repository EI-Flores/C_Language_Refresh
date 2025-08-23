#include <stdio.h>

// =====================
// Funtions  declaration
// =====================
int add(int a, int b);          // Prototipo
int multiply(int a, int b);     // Prototipo
void greet(char name[]);        // Función con cadenas
void swap(int *x, int *y);      // Paso por referencia (punteros)

int main() {
    // Basic use
    int a = 10, b = 5;

    printf("== Basic Functions ==\n");
    printf("%d + %d = %d\n", a, b, add(a, b));
    printf("%d * %d = %d\n", a, b, multiply(a, b));

    // String functions
    printf("\n== Function with Strings ==\n");
    greet("Juan");

    // Pass by reference (pointers)
    printf("\n== Pass by Reference (Pointers) ==\n");
    int x = 3, y = 7;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap:  x = %d, y = %d\n", x, y);

    return 0;
}

// =====================
// Definitions
// =====================
int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

void greet(char name[]) {
    printf("Hello, %s! Welcome to functions in C.\n", name);
}

void swap(int *x, int *y) {
    int temp = *x;   // We save the value of *x
    *x = *y;         // x takes the value of y
    *y = temp;       // y takes the original value of x
}
