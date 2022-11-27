#include <stdio.h>

int tekcift(int a){
    int sonuc = a%2;
    if(sonuc=1)
        printf("tek");
    else if(sonuc=0)
        printf("cift");
}

int main(){
    int sayi;
    printf("Sayi giriniz:");
    scanf("%d", &sayi);
    tekcift(sayi);
}
