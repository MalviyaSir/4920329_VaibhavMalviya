// Vaibhav Malviya
#include <stdio.h>

void sort(int a[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (a[i] > a[j]) {
                int t = a[i]; a[i] = a[j]; a[j] = t;
            }
        }
    }
}

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    int arr[100005];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    sort(arr, n);
    int unfair = 999999999;
    for (int i = 0; i + k - 1 < n; i++) {
        int diff = arr[i + k - 1] - arr[i];
        if (diff < unfair) unfair = diff;
    }
    printf("%d", unfair);
    return 0;
}
