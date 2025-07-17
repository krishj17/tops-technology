#include<stdio.h>

int main(){
    int n=0;
    while(n>=0){
        n++;
        if(n>5) break;
        if(n==3) continue;
        printf("%d ", n);
    }
    return 0;
}