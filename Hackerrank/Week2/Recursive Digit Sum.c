// Vaibhav Malviya
#include <stdio.h>
#include <string.h>

long long digitSum(char s[]) {
    long long sum = 0;
    for(int i = 0; s[i] != '\0'; i++) {
        sum += s[i] - '0';
    }
    return sum;
}

int superDigit(long long n) {
    while(n >= 10) {
        long long s = 0;
        while(n > 0) {
            s += n % 10;
            n /= 10;
        }
        n = s;
    }
    return (int)n;
}

int main() {
    char n[100005];
    int k;
    scanf("%s %d", n, &k);

    long long base = digitSum(n);
    long long total = base * k;

    printf("%d\n", superDigit(total));
    return 0;
}
