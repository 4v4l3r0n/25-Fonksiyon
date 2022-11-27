#include<stdio.h>

int minbul(int []);
int adet;

int main()
{
    int dizi[100],min;
       printf("Eleman sayisini giriniz:");
       scanf("%d",&adet);
   
       printf("Elemanlari giriniz:\n",adet);
       for(int i=0;i<adet;i++)
        {
	      printf("Sayi %d : ",i+1);
	      scanf("%d",&dizi[i]);
	    }
    min=minbul(dizi);

    printf("En kucuk sayi : %d\n\n",min);
    return 0;
}
int minbul(int dizi[])
{
    int i=1,min;
    min=dizi[0];
    while(i < adet)
	{
      if(min>dizi[i])
           min=dizi[i];
      i++;
    }
    return min;
}