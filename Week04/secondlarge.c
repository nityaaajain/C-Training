#include<stdio.h>
int main(){

// Tera bhai Seedhe Maut
int a[4]={1,2,5,4};
int max=a[0],max2=a[0];
for(int i=0;i<4;i++)
{
    
    if(a[i]>max){

     max=a[i];
    }
    

}
for(int i=0;i<4;i++)
if(max2<a[i]&&a[i]<max)
    max2=a[i];
printf("%d",max2);
}