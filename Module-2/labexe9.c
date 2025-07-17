#include<stdio.h>

int main(){
    int arr[]={1,2,3,4,5};
    for(int i=0; i<5; i++){
        printf("%d ",arr[i]);
    }
    int arr2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int sum=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum=sum+arr2[i][j];
        }
    }
    printf("\n%d",sum);
    return 0;
}
