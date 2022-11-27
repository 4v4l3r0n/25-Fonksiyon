#include <stdio.h>

float cikar(float a,float b){   
    float fark = a-b;
    return (fark);
}

float main(){
    float sayi1, sayi2;
    printf("1. sayiyi giriniz:");
    scanf("%f", &sayi1);
    printf("2. sayiyi giriniz:");
    scanf("%f", &sayi2);
    printf("Fark:%.2f", cikar(sayi1,sayi2));
}