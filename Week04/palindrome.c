#include <stdio.h>
int main(){
    int a[5]={1,2,3,2,1};
    int b[5];
    int c;
    for(int i=0,j=4;i<5&&j>=0;i++,j--){
            b[i]=a[j];
    }
    for(int i=0;i<5;i++){printf("%d ",b[i]);}
    for(int i=0;i<5;i++){
        if(a[i]==b[i]){
            c=1;

        }
        else{
            c=0;
            break;
        }

    }
    if(c)
    printf("\nPalindrome :)");
    else
    printf("\nNope :(");
}