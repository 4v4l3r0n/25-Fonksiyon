#include <stdio.h>

float carp(float a,float b){   
    float carpim = a*b;
    return (carpim);
}

float main(){
    float sayi1, sayi2;
    printf("1. sayiyi giriniz:");
    scanf("%f", &sayi1);
    printf("2. sayiyi giriniz:");
    scanf("%f", &sayi2);
    printf("Carpim:%.2f", carp(sayi1,sayi2));
}