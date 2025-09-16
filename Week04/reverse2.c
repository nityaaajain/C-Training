#include<stdio.h>
int main(){
    int a[5]={10,20,30,40,50};
    int temp;
    for(int i=0;i<5;i++)
    {

        temp=a[i] ;
       a[i]=a[i+1];
       a[i+1]=temp;
    }
    for(int i=0;i<5;i++)
    printf("%d ",a[i]);
}