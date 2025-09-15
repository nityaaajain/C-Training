#include <stdio.h>
int main(){

// Tera bhai Seedhe Maut
int a[4]={1,2,5,0};
int max=a[0],min=a[0];
for(int i=0;i<4;i++)
{
    
    if(a[i]>max){

     max=a[i];
    }
}
for(int i=0;i<4;i++)
{
    
    if(a[i]<min)
    {

     min=a[i];
    }
}
printf("%d\n",max);
printf("%d",min);



}