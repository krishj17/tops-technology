#include<stdio.h>

int main(){
    int r=3, c=3;
    int arr1[r][c], arr2[r][c], sum[r][c], mul[r][c];
    for(int t=1; t<=2; t++){    // enter both array.
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                printf("Enter arr%d[%d][%d]: ",t,i,j);
                if(t==1){ scanf("%d",&arr1[i][j]); }      
                else { scanf("%d",&arr2[i][j]); }
            }
        }
    }
    
    for(int t=1; t<=2; t++){    // print both array.
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(t==1){ printf("%d ", arr1[i][j]); }      
                else { printf("%d ", arr2[i][j]); }
                
            }
            printf("\n");
        }
        printf("----------\n");
    }

    for(int i=0; i<r; i++){     // calc sum.
        for(int j=0; j<c; j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    for(int i=0; i<r; i++){     // calc mul.
        for(int j=0; j<c; j++){
            mul[i][j]=0;
            for(int k=0; k<c; k++){
                mul[i][j]=mul[i][j]+arr1[i][k]*arr2[k][j];
            }
        }
    }

    printf("Sum: \n");
    for(int i=0; i<r; i++){     // printf sum.
        for(int j=0; j<c; j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

    printf("mul: \n");
    for(int i=0; i<r; i++){     // printf mul.
        for(int j=0; j<c; j++){
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}