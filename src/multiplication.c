#include <stdio.h>

int main(){
    int n;
    printf("Enter an integer: ");

    if(scanf("%d", &n) != 1){
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    printf("Multiplication table for %d: \n", n);
    for (int i = 1; i<= 10; i++){
        printf("%d x %d = %d\n", n, i, n * i);
    }
}