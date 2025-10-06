#include <stdio.h>
#include<string.h>
int main(){
    char str[]="Yooooo";
    char copy[10];
    int i;
    for( i=0;str[i]!='\0';i++)
     copy[i]=str[i];
    copy[i]='\0';
     for(int i=0;copy[i]!='\0';i++)
    printf("%c",copy[i]);   

}