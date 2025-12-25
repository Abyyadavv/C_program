#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n], b[n];

    // Input elements in array 'a'
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Copy elements from 'a' to 'b'
    for (int i = 0; i < n; i++) {
        b[i] = a[i];
    }

    // Print elements of array 'b'
    for (int i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}