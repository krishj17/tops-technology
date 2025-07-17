#include<stdio.h>

int main(){
    int arr[10]={11,2542,33,44,955,66,77,-88,99,0};
    int temp, min, max;

    for(int i=0; i<=9; i++){
        for(int j=0; j<9; j++){
            if(arr[i]<min) min=arr[i];
            if(arr[i]>max) max=arr[i];

            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("min=%d\n",min);
    printf("max=%d\n",max);

    for(int i=0; i<10; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}