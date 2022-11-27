#include <stdio.h>

int decToOct(int decimal);

int main(){
    int decimal;
    printf("Decimal sayiyi giriniz:");
    scanf("%d", &decimal);
    decToOct(decimal);
}

int decToOct(int decimal){
    printf("Octal: %o", decimal);
    return 0;
}