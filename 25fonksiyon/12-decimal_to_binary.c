#include <stdio.h>

void decimalToBinary(int sayi) {   
   int binary[32];
   int i=0;
   for(; sayi > 0 ;i++){
      binary[i] = sayi % 2;
      sayi /= 2;
   }
   
   for (int j = i-1; j >= 0; j--)
      printf("%d", binary[j]);
}

int main() {
   int sayi;
   printf("Decimal sayiyi giriniz:");
   scanf("%d", &sayi);
   decimalToBinary(sayi);
}
