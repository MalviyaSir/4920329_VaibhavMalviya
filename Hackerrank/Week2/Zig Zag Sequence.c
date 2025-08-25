// Vaibhav Malviya
#include <stdio.h>

void bubble(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a[1000];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    bubble(a, n);
    int mid = (n - 1) / 2;
    int t = a[mid]; a[mid] = a[n-1]; a[n-1] = t;

    int l = mid + 1, r = n - 2;
    while (l < r) {
        int temp = a[l]; a[l] = a[r]; a[r] = temp;
        l++; r--;
    }

    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
