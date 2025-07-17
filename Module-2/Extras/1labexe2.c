#include<stdio.h>

int main(){
    int no;
    printf("enter the number: ");
    scanf("%d", &no);

    if(no%2==0) 
        printf("\nno is even");
    else 
        printf("\nno is odd");
  
    if(no>0)
        printf("\nno is positive");
    else if(no<0)
        printf("\nno is negative");
    else
        printf("\nno is zero");

    if(no%3==0 && no%5==0)
        printf("\nno is multiple of 3");
    return 0;
}