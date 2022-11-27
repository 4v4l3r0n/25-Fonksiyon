#include <stdio.h>

int kup(int sayi);

int main()
{
    int sayi;
    int sonuc;
    
    printf("Kubu alinacak sayiyi giriniz: ");
    scanf("%d", &sayi);
    
    sonuc = kup(sayi);

    printf("%d^3 = %d", sayi, sonuc); 
    
    return 0;
}

int kup(int sayi)
{
    return (sayi * sayi * sayi);
}