#include<stdio.h>

int main(){
    int n1,n2;
    char op;
    printf("enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    printf("\nenter the operator: ");
    scanf(" %c", &op);

    switch(op){
        case '+':
            printf("%d", n1+n2);
            break;
        case '-':
            printf("%d", n1-n2);
            break;
        case '*':
            printf("%d", n1*n2);
            break;
        case '/':
            printf("%d", n1/n2);
            break;
        case '%':
            printf("%d", n1%n2);
            break;
        default:
            printf("invalid choice");
    }

    return 0;
}