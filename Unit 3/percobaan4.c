#include <stdio.h>

#define MAX_PERSONS 3
#define MAX_NAME_LENGTH 20

int main() {
    
    char names[MAX_PERSONS][MAX_NAME_LENGTH] = {"Roma", "Romi", "Romo"};
    int ages[MAX_PERSONS] = {25, 30, 35};

    printf("Name\t\tAge\n");
    printf("--------------------\n");
    for (int i = 0; i < MAX_PERSONS; i++) {
        printf("%s\t\t%d\n", names[i], ages[i]);
    }

    return 0;
}
//Dalam program tersebut, terdapat dua array satu untuk menyimpan nama-nama orang (names) dan yang lainnya untuk menyimpan usia mereka (ages). Dengan menggunakan perulangan for, program mencetak nama dan usia setiap orang ke layar dengan format yang sesuai. Hasilnya adalah tampilan tabel sederhana yang berisi nama dan usia tiap orang.





