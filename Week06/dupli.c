#include <stdio.h>
#include <string.h>
int main(){
    char str[]="mmnnkk";
    int l= strlen(str);
    for(int i=0;i<l-1;i++){
        for(int j=i+1;j<l;j++){
            if(str[i]==str[j]){
                printf("%c\n",str[i]);
            }
        }
    }
}