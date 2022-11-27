#include <stdio.h>

float hacim(float a, float b, float c){
    float V = a*b*c;
    return V;
}

int main(){
    float a, b, c;
    printf("Kenar uzunluklarini giriniz.\n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    printf("Hacim: %.2f", hacim(a, b, c));
}