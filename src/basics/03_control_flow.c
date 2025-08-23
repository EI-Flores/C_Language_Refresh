#include <stdio.h>

int main() {
    int number = 5;

    // =====================
    // If / else
    // =====================
    printf("== IF / ELSE ==\n");
    if (number > 0) {
        printf("%d is positive\n", number);
    } else if (number < 0) {
        printf("%d is negative\n", number);
    } else {
        printf("The number is zero\n");
    }

    // =====================
    // Switch
    // =====================
    printf("\n== SWITCH ==\n");
    char grade = 'B';
    switch (grade) {
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
        case 'C':
            printf("Well done!\n");
            break;
        case 'D':
            printf("You passed\n");
            break;
        case 'F':
            printf("Better try again\n");
            break;
        default:
            printf("Invalid grade\n");
    }

    // =====================
    // For loop
    // =====================
    printf("\n== FOR LOOP ==\n");
    for (int i = 1; i <= 5; i++) {
        printf("Iteration %d\n", i);
    }

    // =====================
    // While loop
    // =====================
    printf("\n== WHILE LOOP ==\n");
    int count = 3;
    while (count > 0) {
        printf("Countdown: %d\n", count);
        count--;
    }

    // =====================
    // Do...while loop
    // =====================
    printf("\n== DO...WHILE LOOP ==\n");
    int option;
    do {
        printf("Enter a number (0 to exit): ");
        scanf("%d", &option);
        printf("You entered: %d\n", option);
    } while (option != 0);

    return 0;
}
