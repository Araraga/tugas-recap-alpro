#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int array[n];
    int total = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &array[i]);
        total += array[i];
    }
    printf("Hasil penjumlahan seluruh elemen: %d\n", total);

    return 0;
}
