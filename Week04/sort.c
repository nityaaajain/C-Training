#include<stdio.h>
int main()
{
    int a[5]={5,4,3,2,1};
    int t;
    for(int j=0;j<5;j++)
    for(int i=0;i<5;i++)
    {
        if(a[i]>a[i+1])
        {
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
    }
    for(int i=0;i<5;i++)
    printf("%d\t",a[i]);
}