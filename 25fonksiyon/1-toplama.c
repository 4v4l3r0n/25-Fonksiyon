#include <stdio.h>

float topla(float a,float b){   
    float toplam = a+b;
    return (toplam);
}

float main(){
    float sayi1, sayi2;
    printf("1. sayiyi giriniz:");
    scanf("%f", &sayi1);
    printf("2. sayiyi giriniz:");
    scanf("%f", &sayi2);
    printf("Toplam:%.2f", topla(sayi1,sayi2));
}