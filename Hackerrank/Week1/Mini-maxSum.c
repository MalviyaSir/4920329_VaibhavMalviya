#include <stdio.h>

void miniMaxSum(int arr_count, int* arr) {
    int min = arr[0], max = arr[0];
    long int sum = 0;

    for (int i = 0; i < arr_count; i++) {
        sum += arr[i];
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    long int min_sum = sum - max;
    long int max_sum = sum - min;

    printf("%ld %ld\n", min_sum, max_sum);
}

int main() {
    int arr[5];

    printf("Enter 5 integers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    miniMaxSum(5, arr);

    return 0;
}
