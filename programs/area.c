#include<stdio.h>

int main(){
    int len,sq;
    printf("enter length of square: ");
    scanf("%d",&len);
    sq=len*len;
    printf("\n area of square = %d", sq);

    int l,b,rect;
    printf("\n enter length and bredth of rectangle: ");
    scanf("%d %d", &l, &b);
    rect=l*b;
    printf("\n area of rectangle = %d", rect);

    float r,circle;
    printf("\n enter radius: ");
    scanf("%f", &r);
    circle=3.14*r*r;
    printf("\n area of circle = %f", circle);

    return 0;
}