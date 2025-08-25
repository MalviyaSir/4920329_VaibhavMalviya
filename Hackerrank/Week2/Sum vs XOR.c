// Vaibhav Malviya
#include <stdio.h>

int main() {
    unsigned long long n;
    scanf("%llu", &n);

    if (n == 0) {
        printf("1");
        return 0;
    }

    int zeros = 0;
    unsigned long long temp = n;
    while (temp > 0) {
        if ((temp & 1ULL) == 0) zeros++;
        temp >>= 1;
    }

    unsigned long long ans = 1ULL;
    for (int i = 0; i < zeros; i++) ans *= 2ULL;

    printf("%llu", ans);
    return 0;
}
