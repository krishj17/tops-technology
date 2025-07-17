#include<stdio.h>

int main(){
    int no=97;

    for(int i=2; i<no; i++){
        int flag=1;
        for(int j=2; j<i; j++){
            if(i%j==0){
                flag=0;
                break;
            }            
        }
        if(flag==1) printf("%d ", i);

        if(no%i==0){
            printf(" its not a prime no");
            break;
        }
        if(i+1==no) printf(" its a prime no");  
    }  
    return 0;
}