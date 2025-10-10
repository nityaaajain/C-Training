#include<stdio.h>
#include <string.h>
int main(){
    char str[]="hello";
    char target='e';
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=target)
    printf("%c",str[i]);
    }

}