#include <stdio.h>

int kelilingPersegi(int sisi) {
    return 4 * sisi;
}
int luasPersegi(int sisi) {
    return sisi * sisi;
}
int volumeKubus(int sisi) {
    return sisi * sisi * sisi;
}

int main() {
    int sisi;
    scanf("%d", &sisi);
    printf("Keliling Persegi: %d\n", kelilingPersegi(sisi));
    printf("Luas Persegi: %d\n", luasPersegi(sisi));
    printf("Volume Kubus: %d\n", volumeKubus(sisi));
    return 0;
}
