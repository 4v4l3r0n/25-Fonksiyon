#include<stdio.h>

int minbul(int []);
int adet;

int main()
{
    int dizi[100],max;
       printf("Eleman sayisini giriniz:");
       scanf("%d",&adet);
   
       printf("Elemanlari giriniz:\n",adet);
       for(int i=0;i<adet;i++)
        {
	      printf("Sayi %d : ",i+1);
	      scanf("%d",&dizi[i]);
	    }
    max=minbul(dizi);

    printf("En buyuk sayi : %d\n\n",max);
    return 0;
}
int minbul(int dizi[])
{
    int i=1,max;
    max=dizi[0];
    while(i < adet)
	{
      if(max<dizi[i])
           max=dizi[i];
      i++;
    }
    return max;
}