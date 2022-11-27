#include <stdio.h>

long fact=1;
int faktoriyel(int a){
    for(int b=1; b<=a; b++){
        fact *= b;
    }
    return fact;
}

int main(){
    int sayi;
    printf("Faktoriyelini almak istediginiz sayiyi giriniz:");
    scanf("%d", &sayi);
    printf("%d! = %ld", sayi, faktoriyel(sayi));

}