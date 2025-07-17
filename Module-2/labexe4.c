#include<stdio.h>

int main(){
    int n1,n2;
    printf("enter two number: ");
    scanf("%d%d", &n1, &n2);

    printf("\nn1+n2: %d", n1+n2); // Arithmetic
    n1>n2 ? printf("\nn1>n2") : printf("\nn2>n1"); // Relational
    n1>0 && n2>0 ? printf("\nboth positive") : printf("\none or both negative"); // Logical

    return 0;
}