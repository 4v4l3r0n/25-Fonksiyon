#include <stdio.h>

int decToOct(int decimal);

int main(){
    int decimal;
    printf("Decimal sayiyi giriniz:");
    scanf("%d", &decimal);
    decToOct(decimal);
}

int decToOct(int decimal){
    printf("Hexadecimal: %x", decimal);
    return 0;
}