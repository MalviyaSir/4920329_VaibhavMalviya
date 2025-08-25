// Vaibhav Malviya
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int freq[100] = {0};

    for(int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        freq[x]++;
    }

    for(int i = 0; i < 100; i++) {
        if(i == 99) printf("%d", freq[i]);
        else printf("%d ", freq[i]);
    }
    return 0;
}
