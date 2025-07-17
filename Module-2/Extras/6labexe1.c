#include<stdio.h>
#include<string.h>

int main() {
    char str[]="hello";
    int n=strlen(str), r=n-1;
    char str2[n];   
    for(int i=0; i<=n; i++){
        if(i==5){
            str2[i]='\0';
            break;
        }
        str2[i]=str[r];
        r--;
    }
    printf("%s",str2);
    return 0;
}