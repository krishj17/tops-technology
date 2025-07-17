#include<stdio.h>
#include<string.h>

void funct(int n) {
    int save=n, sum=0;
    while(n>0){
        int rem=n%10;
        sum=(sum*10)+rem;
        n=n/10;
    }
    if(sum==save){
        printf("its palindrome");
    }
    else{
        printf("its not palindrome");
    }

}

void strpal(){
    char str[]="racecar";
    int n=strlen(str), r=n-1; 
    char str2[n];
    for(int i=0; i<=n; i++){
        if(i==n){
            str2[i]='\0';
            break;
        }
        str2[i]=str[r];
        r--;
    }
    if(strcmp(str,str2)==0)
        printf("its palindrome");
    else
        printf("its not palindrome");
}
int main() {
    int n=89798;
    funct(n);
    //strpal();
    return 0;
}