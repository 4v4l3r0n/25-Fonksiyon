#include <stdio.h>

int ntopla(int n);

int main() {

  int sayi;
  printf("Pozitif bir sayi giriniz: ");
  scanf("%d", &sayi);
  printf("1'den %d'e kadar olan sayilarin toplami = %d", sayi, ntopla(sayi));
  return 0;
}

int ntopla(int n) {
  int toplam = 0;
  do{
    toplam += n;
    n--;
  }while(n!=0);
  return toplam;
}
