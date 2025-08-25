// Vaibhav Malviya
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[1001];
    fgets(s, sizeof(s), stdin);

    int freq[26] = {0};
    int len = strlen(s);
    for(int i = 0; i < len; i++) {
        if(isalpha(s[i])) {
            char c = tolower(s[i]);
            freq[c - 'a'] = 1;
        }
    }

    int pangram = 1;
    for(int i = 0; i < 26; i++) {
        if(freq[i] == 0) {
            pangram = 0;
            break;
        }
    }

    if(pangram) printf("pangram\n");
    else printf("not pangram\n");

    return 0;
}
