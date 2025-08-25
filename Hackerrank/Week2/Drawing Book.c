// Vaibhav Malviya
#include <stdio.h>

int main() {
    int n, p;
    scanf("%d%d", &n, &p);

    int fromFront = p / 2;
    int fromBack = (n / 2) - (p / 2);

    if (fromFront < fromBack) printf("%d", fromFront);
    else printf("%d", fromBack);
    return 0;
}
