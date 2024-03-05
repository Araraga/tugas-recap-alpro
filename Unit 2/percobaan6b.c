#include <stdio.h>

int main() {
    int i = 2, j;

    do {
        printf("Bilangan utama: %d\n", i);
        j = 1;
        
        do {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        } while (j <= 2);

        i++;
    } while (i <= 3);

    return 0;
}
//Program tersebut menggunakan dua perulangan do-while untuk membentuk tabel perkalian sederhana. Pada perulangan pertama, nilai i (bilangan utama) ditingkatkan tiap iterasi, dan dalam tiap iterasi, program memasuki perulangan kedua yang mencetak nilai j (bilangan pengali) dan hasil perkalian i * j. Variabel j diinisialisasi ulang ke 1 di awal setiap iterasi perulangan pertama. Program terus berjalan selama nilai i kurang dari atau sama dengan 3. Hasil akhirnya adalah tabel perkalian untuk bilangan utama 2 dan 3, dengan bilangan pengali bervariasi dari 1 hingga 2.