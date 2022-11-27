#include <stdio.h>

int ekok(int a, int b);


int main()
{
    int num1, num2, EKOK;

    printf("Sayilari giriniz:\n");
    scanf("%d%d", &num1, &num2);
    
    EKOK = ekok(num1, num2);
        
    printf("EKOK(%d,%d) = %d", num1, num2, EKOK);
    
    return 0;
}

int ekok(int a, int b)
{
    static int multiple = 0; //her recursion'da sıfırlanmaması için static

    multiple += b;

    if((multiple % a == 0) && (multiple % b == 0))
    {
        return multiple;
    }
    else 
    {
        return ekok(a, b);
    }
}