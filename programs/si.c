#include<stdio.h>

int main(){
    int p, t;
    float r, ans;
    printf("enter principal amount: ");
    scanf("%d", &p);
    printf("enter rate: ");
    scanf("%f", &r);
    printf("enter time: ");
    scanf("%d", &t);
    ans=p*r*t/100;
    printf("simple interest = %f",ans);

    return 0;
}