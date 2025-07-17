#include<stdio.h>

int main(){
    int n, sum=0;
    printf("enter no of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter array element %d: ", i);
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){ // sum.
        sum=sum+arr[i];   
    }
    for(int i=0; i<n; i++){ // print.
        printf("%d ",arr[i]);
    }
    printf("\nSum: %d ",sum);
    printf("\nAverage: %d", sum/n);
    return 0;
}