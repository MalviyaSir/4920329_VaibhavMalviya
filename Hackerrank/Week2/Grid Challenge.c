// Vaibhav Malviya
#include <stdio.h>
#include <string.h>

void sortRow(char s[]) {
    int n = strlen(s);
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (s[i] > s[j]) {
                char t = s[i]; s[i] = s[j]; s[j] = t;
            }
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        char grid[100][101];
        for (int i = 0; i < n; i++) {
            scanf("%s", grid[i]);
            sortRow(grid[i]);
        }
        int ok = 1;
        for (int c = 0; c < strlen(grid[0]); c++) {
            for (int r = 1; r < n; r++) {
                if (grid[r][c] < grid[r-1][c]) ok = 0;
            }
        }
        printf(ok ? "YES\n" : "NO\n");
    }
    return 0;
}
