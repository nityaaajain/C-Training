#include<stdio.h>
int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,9};
    int c=0;
    int n=9;
    for(int i=0;i<10;i++){
        if(a[i]==n){
            c++;
        }
        

      

    }
    printf("%d",c);
}