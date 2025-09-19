#include<stdio.h>
int main(){
    int a[5]={-1,-2,3,-4,-5};
    int k=3;
    for(int i=0;i<5;i++){
        if(a[i]<0)
        printf("%d\t",a[i]);
    }
}