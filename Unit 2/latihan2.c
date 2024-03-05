#include <stdio.h>

int main() {
    int jumlahTransaksi, nominalTransaksi, totalPengeluaran = 0;
    scanf("%d", &jumlahTransaksi);

    if (jumlahTransaksi <= 0) {
        printf("Tidak ada transaksi hari ini\n");
    } else {
        for (int i = 0; i < jumlahTransaksi; ++i) {
            scanf("%d", &nominalTransaksi);
            totalPengeluaran += nominalTransaksi;
        }
        printf("Total pengeluaran hari ini: %d\n", totalPengeluaran);
    }

    return 0;
}
