#include <stdio.h>

int ebob(int a, int b);


int main()
{
    int sayi1, sayi2, sonuc;

    printf("Sayilari giriniz: ");
    scanf("%d%d", &sayi1, &sayi2);
    
    sonuc = ebob(sayi1, sayi2);
    
    printf("EBOB(%d,%d) = %d", sayi1, sayi2, sonuc);
    
    return 0;
}


int ebob(int a, int b)
{
    if(b == 0)
        return a;
    else
        return ebob(b, a%b); 
}