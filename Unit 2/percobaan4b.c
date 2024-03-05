#include <stdio.h>

int i, j;

int main(){
    
    for (i = 2; i <= 3; ++i) {
        printf("Bilangan utama: %d\n", i);
        
        for (j = 1; j <= 2; ++j) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            }
        
    }

    return 0;
}
//Iterasi pertama menggunakan variabel i (2 hingga 3) dan setiap iterasi mencetak bilangan utama. Di dalamnya, iterasi kedua menggunakan variabel j (1 hingga 2) untuk mencetak bilangan pengali dan hasil perkalian (i * j). Hasilnya adalah tabel perkalian untuk bilangan utama 2 dan 3 dengan bilangan pengali 1 hingga 2   