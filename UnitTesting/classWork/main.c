// main.c
#include <stdio.h>
#include "demo.h"

int main() {
    int a = 10, b = 5;

    printf("Sum = %d\n", sum(a, b));
    printf("Product = %d\n", product(a, b));
    printf("Square of a = %d\n", square(a));
    printf("Difference = %d\n", difference(a, b));
    printf("Division = %.2f\n", division(a, b));

    return 0;
}
