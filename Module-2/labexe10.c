#include<stdio.h>

int main(){
        int n=10;
        int *p=&n;
        printf("\nn before: %d",n);
        *p=5;
        printf("\nn after: %d",n);
        
    return 0;
}
