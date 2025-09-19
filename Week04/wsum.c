#include<stdio.h>
int main (){
    int k=3,wsum=0,n=5;
    int a[5]={1,2,3,4,5};
    for(int i=0;i<k;i++)
       wsum=wsum+a[i];
    int max=wsum;
    for(int j=k;j<n;j++){
        wsum=wsum+a[j+1]-a[j-k];
        if(wsum>max)
        max=wsum;
    }
    printf("%d",max);

}