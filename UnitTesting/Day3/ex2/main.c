#include <stdio.h>
#include "demo.h"

int main(void) {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (is_even(num)) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}
