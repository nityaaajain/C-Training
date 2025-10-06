#include <stdio.h>
#include <string.h>
int main(){
    char str[]="DND";
    int i;
    int c=1;
    int l= strlen(str);
    for(i=0;i<l/2;i++){
        if(str[i]!=str[l-1-i]){
        c=0;
        break;
        }
        // else{
        //     c=1;
        //     break;
        // }
        //  l--;
    }
    if(c)
    printf("\nPalindrome :)");
    else
    printf("\nNope :(");





}