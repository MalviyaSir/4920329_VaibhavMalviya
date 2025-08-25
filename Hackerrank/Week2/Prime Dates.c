// Vaibhav Malviya
#include <stdio.h>

int leap(int y) {
    if (y % 400 == 0) return 1;
    if (y % 100 == 0) return 0;
    if (y % 4 == 0) return 1;
    return 0;
}

int daysInMonth(int m, int y) {
    if (m == 1) return 31;
    if (m == 2) return 28 + leap(y);
    if (m == 3) return 31;
    if (m == 4) return 30;
    if (m == 5) return 31;
    if (m == 6) return 30;
    if (m == 7) return 31;
    if (m == 8) return 31;
    if (m == 9) return 30;
    if (m == 10) return 31;
    if (m == 11) return 30;
    return 31;
}

long long makeNumber(int d, int m, int y) {
    long long res = d;
    res = res * 100 + m;
    res = res * 10000 + y;
    return res;
}

int main() {
    int d1, m1, y1, d2, m2, y2;
    scanf("%d %d %d", &d1, &m1, &y1);
    scanf("%d %d %d", &d2, &m2, &y2);

    int D = d1, M = m1, Y = y1;
    int count = 0;
    while (1) {
        long long val = makeNumber(D, M, Y);
        if (val % 4 == 0 || val % 7 == 0) count++;

        if (D == d2 && M == m2 && Y == y2) break;

        D++;
        if (D > daysInMonth(M, Y)) {
            D = 1;
            M++;
            if (M > 12) {
                M = 1;
                Y++;
            }
        }
    }
    printf("%d", count);
    return 0;
}
