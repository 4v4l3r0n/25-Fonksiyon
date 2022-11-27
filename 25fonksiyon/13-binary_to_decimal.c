#include <stdio.h>

int binary_to_decimal(int binary);

int main(){
    int sayi, decimal;
    printf("Binary sayiyi giriniz:");
    scanf("%d", &sayi);
    decimal = binary_to_decimal(sayi);
    printf("Decimal: %d", decimal);
}

int binary_to_decimal(int binary){
    int decimal=0, kalan, carpan2=1;
    while(binary > 0){
        kalan = binary%10;
        binary = binary/10;
        decimal += kalan*carpan2;
        carpan2 *= 2;
    }
    return decimal;
}