#include <stdio.h>
#include <math.h>

float hipo(float a,float b){   
    float hipotenus = sqrt(a*a + b*b);
    return (hipotenus);
}

float main(){
    float kenar1, kenar2;
    printf("Kenar uzunlugunu giriniz:");
    scanf("%f", &kenar1);
    printf("Diger kenar uzunlugunu giriniz:");
    scanf("%f", &kenar2);
    printf("Hipotenus:%.2f", hipo(kenar1,kenar2));
}