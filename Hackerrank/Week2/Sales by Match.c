// Vaibhav Malviya
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int socks[1010];
    for (int i = 0; i < n; i++) scanf("%d", &socks[i]);

    // simple count using freq array
    int freq[105] = {0};
    for (int i = 0; i < n; i++) freq[socks[i]]++;

    int ans = 0;
    for (int c = 0; c < 105; c++) {
        ans += freq[c] / 2;
    }
    printf("%d", ans);
    return 0;
}
