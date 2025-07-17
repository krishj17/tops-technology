#include<stdio.h>

int main(){
    int n1,n2,n3,big,small;
    printf("enter the three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if(n1>n2 && n1>n3){
        big = n1;
        if(n2<n3) small = n2;
        else small = n3;
    }
    else if(n2>n1 && n2>n3){
        big = n2;
        if(n3<n1) small = n3;
        else small = n1;
    }
    else{
        big = n3;
        if(n1<n2) small = n1;
        else small = n2;
    }
    
    printf("%d is big", big);
    printf(" %d is small", small);
    return 0;
}