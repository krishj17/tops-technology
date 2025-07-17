#include<stdio.h>

int main(){
    int n=6, m=4;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=9; j++){
            if(i>=2 && j>=n && j<=m)
                printf("  ");
            else
                printf("* ");    
        } 
        n--; 
        m++;
        printf("\n");
    }
    return 0;
}