#include<stdio.h>

int main(){
    int n=0;
    for(int i=1; i<=5; i++){
        if(i<=3)
             n++; 
        else
            n--;

        for(int k=5; k>=n; k--){
            printf("  ");
        }
        for(int j=1; j<=n+n-1; j++){
            printf("* ");
        } 
        printf("\n");
    }
    return 0;
}