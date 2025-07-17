#include<stdio.h>

int main(){
    int w=1;
    printf("\nwhile loop--------");
    while(w<=10){
        printf("%d ",w);
        w++;
    }
    printf("\nfor loop--------");
    for(int f=1; f<=10; f++){
        printf("%d ",f);
    }
    printf("\ndo-while loop--------");  
    int dw=1;
    do{
        printf("%d ",dw);
        dw++;
    }
    while(dw<=10);
    return 0;
}