#include<stdio.h>

int main(){
    int n1=3, n2=20;
    printf("n1=%d n2=%d", n1,n2);

    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;    

    printf("\n after swap: n1=%d n2=%d", n1,n2);

    return 0;
}