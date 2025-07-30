#include<stdio.h> // Incomplete.
#include<string.h>

int main() {
    int count=0;
    char s[]="this is hello world";
    for(int i=0; i<strlen(s); i++){
        if(s[i]!=' '){
            count++;
        } 
    }
    printf("%s",s);
    printf(" %d",count);
    return 0;
}