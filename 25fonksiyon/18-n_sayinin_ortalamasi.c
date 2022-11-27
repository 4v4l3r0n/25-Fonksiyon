#include<stdio.h>

int main()
{
  int n,toplam=0,sayilar;
  float ortalama;

  printf("Sayi adedini giriniz:");
  scanf("%d",&n);

  printf("Sayilari giriniz:\n");
  for(int a=0; a<n; a++)
   {
     scanf("%d",&sayilar);
     toplam = toplam + sayilar;
   }

  ortalama = toplam/n;

  printf("Ortalama = %.2f", ortalama);

  return 0;
}
