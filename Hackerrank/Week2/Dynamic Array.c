// Vaibhav Malviya
#include <stdio.h>

int main() {
    int n, q;
    scanf("%d%d", &n, &q);

    int seq[100][100]; // small hardcoded 2D
    int size[100] = {0};
    int last = 0;

    for (int i = 0; i < q; i++) {
        int t, x, y;
        scanf("%d%d%d", &t, &x, &y);
        int idx = (x ^ last) % n;
        if (t == 1) {
            seq[idx][size[idx]++] = y;
        } else {
            last = seq[idx][y % size[idx]];
            printf("%d\n", last);
        }
    }
    return 0;
}
