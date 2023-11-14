#include <stdio.h>

int main() {
    int n, kelipatan;

    printf("Input: ");
    scanf("%d %d", &n, &kelipatan);
    
    int jumlah = 0;
    
    for (int i = 1; i<= n; i++){
        int hasilBaris = 0;

        for (int j = i; j >= 1; j--){
            int nilai = j * kelipatan;
            printf("(%d * %d)", j, kelipatan);
            hasilBaris += nilai;

            if (j > 1) {
                printf(" + ");
            }
        }
        printf(" = %d\n", hasilBaris);
        jumlah += hasilBaris;
    }
    printf("%d\n", jumlah);
    return 0;
}