// Vaibhav Malviya
#include <stdio.h>
#include <string.h>

int main() {
    int len;
    scanf("%d", &len);
    char s[1005];
    scanf("%s", s);
    int k;
    scanf("%d", &k);
    k = k % 26;

    for (int i = 0; i < strlen(s); i++) {
        char c = s[i];
        if (c >= 'a' && c <= 'z') {
            c = (char)((((c - 'a') + k) % 26) + 'a');
        } else if (c >= 'A' && c <= 'Z') {
            c = (char)((((c - 'A') + k) % 26) + 'A');
        }
        s[i] = c;
    }
    printf("%s", s);
    return 0;
}
