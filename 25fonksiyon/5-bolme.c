#include <stdio.h>

float bol(float a,float b){   
    float bolum = a/b;
    return (bolum);
}

float main(){
    float sayi1, sayi2;
    printf("1. sayiyi giriniz:");
    scanf("%f", &sayi1);
    printf("2. sayiyi giriniz:");
    scanf("%f", &sayi2);
    printf("Bolum:%.2f", bol(sayi1,sayi2));
}