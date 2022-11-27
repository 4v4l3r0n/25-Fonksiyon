#include <stdio.h>

int kup(int sayi);

int main()
{
    int sayi;
    int sonuc;
    
    printf("Karesi alinacak sayiyi giriniz: ");
    scanf("%d", &sayi);
    
    sonuc = kup(sayi);

    printf("%d^2 = %d", sayi, sonuc); 
    
    return 0;
}

int kup(int sayi)
{
    return (sayi * sayi);
}