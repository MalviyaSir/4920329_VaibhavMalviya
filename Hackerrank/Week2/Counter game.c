// Vaibhav Malviya
#include <stdio.h>

int isPower2(unsigned long long n) {
    if (n == 0) return 0;
    return (n & (n - 1)) == 0;
}

unsigned long long highestPow2(unsigned long long n) {
    unsigned long long p = 1;
    while (p * 2ULL <= n) {
        p *= 2ULL;
    }
    return p;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        unsigned long long n;
        scanf("%llu", &n);
        int moves = 0;
        while (n > 1) {
            if (isPower2(n)) n /= 2ULL;
            else n -= highestPow2(n);
            moves++;
        }
        if (moves % 2 == 1) printf("Louise\n");
        else printf("Richard\n");
    }
    return 0;
}
