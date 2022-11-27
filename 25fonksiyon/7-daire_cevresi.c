#include <stdio.h>
#include <math.h>

float PI=3.14159265359;

float alan(float a){   
    float cevre = 2*PI*a;
    return (cevre);
}

float main(){
    float yaricap;
    printf("Yaricap uzunlugunu giriniz:");
    scanf("%f", &yaricap);
    printf("Cevre:%.2f", alan(yaricap));
}