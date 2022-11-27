#include <stdio.h>
#include <math.h>

float PI=3.14159265359;

float alan(float a){   
    float alan = PI*a*a;
    return (alan);
}

float main(){
    float yaricap;
    printf("Yaricap uzunlugunu giriniz:");
    scanf("%f", &yaricap);
    printf("Alan:%.2f", alan(yaricap));
}