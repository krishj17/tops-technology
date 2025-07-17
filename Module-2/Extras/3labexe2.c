#include<stdio.h>

int main(){
    int no,r;
    printf("enter the no and range: ");
    scanf("%d %d", &no, &r);

    for(int i=1; i<=r; i++){
        printf("\n%d x %d = %d", no, i, i*no);
    }
    return 0;
}