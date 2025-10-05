#include <stdio.h>

typedef struct {
    float posisi;
} Objek;

void deteksiTabrakan(Objek *objA, Objek *objB) {
    if (objA->posisi == objB->posisi) {
        printf(">> Tabrakan terdeteksi pada posisi X = %.2f\n", objA->posisi);
    } else {
        printf(">> Tidak ada tabrakan.\n");
    }
}

int main() {
    Objek kotak1, kotak2;

    printf("Masukkan posisi X untuk kotak pertama: ");
    scanf("%f", &kotak1.posisi);

    printf("Masukkan posisi X untuk kotak kedua: ");
    scanf("%f", &kotak2.posisi);

    deteksiTabrakan(&kotak1, &kotak2);

    return 0;
}
