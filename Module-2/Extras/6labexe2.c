#include<stdio.h>
#include<string.h>
int main() {
    char str[]="helloworld12";
    int v=0,c=0,d=0,s=0; 
    for(int i=0; i<strlen(str); i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            v=v+1;
        }
        else if(str[i]>=48 && str[i]<=57){
            d=d+1;
        }
        else if(str[i]>=33 && str[i]<=47 || str[i]>=58 && str[i]<=64){
            s=s+1;
        }
        else{
            c=c+1;
        }
    }
    printf("vowel:%d consonant:%d digit:%d symbol:%d",v,c,d,s);
    return 0;
}