#include<stdio.h>
#include <string.h>
int main(){
    char str[]="shsCHGcgcGCHg$$@";
    int freq[256]={0};
    int len= strlen(str);
    for(int i=0;i<len;i++){
        freq[str[i]]++;

    }
    for(int i=0;i<len;i++){
        if(freq[str[i]]==1){
            printf(">>>>  %c  <<<<",str[i]);
            break;
        }
    } 
}