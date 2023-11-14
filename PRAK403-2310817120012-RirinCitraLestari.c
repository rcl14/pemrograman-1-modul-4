#include <stdio.h>

int main() {
    int angka1, angka2, x;

    printf("Input (dua angka dipisahkan spasi): ");
    scanf("%d %d", &angka1, &angka2);

    if (angka1 < angka2) {
        for (int i = angka1; i <= angka2; i++) {
            x = angka2;
            x = x - (i - angka1);
            printf("%d %d", i, x);
            if (i == angka2){
                break;
            } else{
                printf(" - ");
            }
        }
    } else {
        for (int i = angka1; i >= angka2; i--) {
            x = angka2;
            x = x + (angka1 - i);
            printf("%d %d", i, x);
            if (i == angka2){
                break;
            } else{
                printf(" - ");
            }
        }
    }

    return 0;
}
