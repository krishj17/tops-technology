#include<stdio.h>

void calcfact(int n);

int main(){
    int n=7;
    calcfact(n);
    return 0;
}

void calcfact(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact=fact*i;
    }
    printf("%d",fact);
};