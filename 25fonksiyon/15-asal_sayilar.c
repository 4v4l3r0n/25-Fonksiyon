#include <stdio.h>

int asalKontrol(int n);
int main() {

  int sayi1, sayi2, kontrol, temp;

  printf("İki pozitif tam sayı giriniz: ");
  scanf("%d %d", &sayi1, &sayi2);

  // sayı 1 sayı 2'den büyükse yer değiştir
  if (sayi1 > sayi2) {
    temp = sayi1;
    sayi1 = sayi2;
    sayi2 = temp;
  }

  printf("%d ve %d arasındaki asal sayılar: ", sayi1, sayi2);
  for (int i = sayi1 + 1; i < sayi2; ++i) {

    // i asal ise kontrol = 1 olacak
    kontrol = asalKontrol(i);

    if (kontrol == 1) {
      printf("%d ", i);
    }
  }
  
  return 0;
}

int asalKontrol(int sayi) {
  int bolen, kontrol = 1;

  for (bolen = 2; bolen <= sayi / 2; bolen++) {

    if (sayi % bolen == 0) {
      kontrol = 0;
      break;
    }
  }

  return kontrol;
}