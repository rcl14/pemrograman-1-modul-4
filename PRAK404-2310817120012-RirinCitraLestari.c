#include <stdio.h>

void calculator() {
    while (1) {
        printf("Pilih program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\n");
        int choice;
        printf("Masukkan Pilihan: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Terimakasih, telah menggunakan kalkulator Ririn\n");
            break;
        }

        if (choice < 1 || choice > 4) {
            printf("Input anda salah, silahkan coba lagi\n");
            continue;
        }

        float num1, num2;
        printf("Masukkan nilai pertama: ");
        scanf("%f", &num1);

        printf("Masukkan nilai kedua: ");
        scanf("%f", &num2);

        float result;
        char operation[15];

        switch (choice) {
            case 1:
                result = num1 + num2;
                sprintf(operation, "Penjumlahan");
                break;
            case 2:
                result = num1 - num2;
                sprintf(operation, "Pengurangan");
                break;
            case 3:
                result = num1 * num2;
                sprintf(operation, "Perkalian");
                break;
            case 4:
                if (num2 == 0) {
                    printf("Error: Pembagian dengan 0\n");
                    continue;
                }
                result = num1 / num2;
                sprintf(operation, "Pembagian");
                break;
        }

        printf("Hasil %s antara %.2f dengan %.2f adalah %.2f\n", operation, num1, num2, result);
    }
}

int main() {
    calculator();
    return 0;
}
