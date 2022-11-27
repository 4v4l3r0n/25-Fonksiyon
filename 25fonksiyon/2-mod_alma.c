#include <stdio.h>

int mod(int a,int b){   
    int mod = a%b;
    return (mod);
}

int main(){
    int sayi1, sayi2;
    printf("1. sayiyi giriniz:");
    scanf("%d", &sayi1);
    printf("2. sayiyi giriniz:");
    scanf("%d", &sayi2);
    printf("%d/%d bolumunden kalan:%d",sayi1,sayi2,mod(sayi1,sayi2));
}