#include<stdio.h>

int main(){
    int no,rem,sum=0;
    int rev=0;
    printf("enter the no: ");
    scanf("%d", &no);

    while(no>0){
        rem=no%10;
        sum=sum+rem;
        rev=(rev*10)+rem;
        no=no/10;
    }
    printf("\n%d",sum);
    printf("\n%d",rev);
    return 0;
}