#include<stdio.h>
int fibo(int n, int x1, int x2){
    if(n<=0){
        return;
    }
    int ans=x1+x2;
    printf("%d\t",ans);
    fibo(n-1, x2, ans);
    return 0;
}
int main() {
    int x1=0, x2=1;
    printf("Fibonacci: 0\t1\t");
    fibo(10, x1, x2);
    return 0;
}