#include<stdio.h>
#include<string.h>
// void check(int n){
//     int rev=0, rem, save=n;
//     while(n>0){
//         rem=n%10;
//         rev=(rev*10)+rem;
//         n=n/10;
//     }
//     if(save==rev){ printf("its palindrome"); }
//     else{ printf("its not palindrome"); }
// }
void strcheck(char s[]){
    printf("%s ",s);
    // if(s==strrev(s)){ printf("string is palindrome"); }
    // else{ printf("string is not palindrome"); }
    printf("%s",strrev(s));
    if(strcmp(s,strrev(s))){ printf("true"); }
}
int main() {
    int n=12321;
    char s[]="racecar";
    //check(n);
    strcheck(s);
    return 0;
}