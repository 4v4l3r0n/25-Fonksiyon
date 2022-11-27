#include <stdio.h>

int kuvvet(int taban, int ust);

int main() {
    int taban, ust, sonuc;
    printf("Taban sayısını giriniz: ");
    scanf("%d", &taban);
    printf("Pozitif üst giriniz: ");
    scanf("%d", &ust);
    sonuc = kuvvet(taban, ust);
    printf("%d^%d = %d", taban, ust, sonuc);
    return 0;
}

int kuvvet(int taban, int ust) {
    int sonuc = 1;
    do{
        sonuc = sonuc * taban;
        ust--;
    }while(ust != 0);
    return sonuc;
}