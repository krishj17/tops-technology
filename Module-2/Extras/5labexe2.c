#include<stdio.h>

int fact(int n) {
    if(n==0||n==1)
        return 1;
    else
        return n * fact(n-1);
}

int main() {
    int n=5, sum=1;
    printf("%d ", fact(n));
    
    // for(int i=1; i<=n; i++){
    //     sum=sum*i;
    // }
    // printf("%d",sum);
    return 0;
}