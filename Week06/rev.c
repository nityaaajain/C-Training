#include <stdio.h>
#include<string.h>
int main(){
    char str[]="Yooooo";
    int l= strlen(str);
    for(int i=l ;i>=0;i--)
    printf("%c\n",str[i]);
    printf("%s",str);

}