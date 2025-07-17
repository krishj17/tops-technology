#include<stdio.h>

int main(){
    int n1=10, n2=20, n3;
    printf("n1=%d n2=%d", n1,n2);

    n3=n1;
    n1=n2;
    n2=n3;

    printf("\n after swap: n1=%d n2=%d", n1,n2);

    return 0;
}