#include<stdio.h>

int main(){
    int n=1;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            if(n%2==0){
                printf("0 ");  
            }
            else{
                printf("1 ");
            }
            n++;    
        } 
        printf("\n");
    }
    return 0;
}