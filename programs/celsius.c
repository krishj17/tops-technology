#include<stdio.h>

int main(){
    float c,f;
    printf("enter celsius value: ");
    scanf("%f",&c);

    f=(c*9/5)+32;
    printf("\n Fahrenheit = %f", f);
    return 0;
}