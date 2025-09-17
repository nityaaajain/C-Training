#include<stdio.h>
int main(){
    int a[4]={10,20,30,40};
    int k=7;
    int sum[4];
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
           sum[i]= a[i]+a[j];
            
        }
    }
    for(int i=0;i<3;i++)
    printf("%d ",sum[i]);
    int max=sum[0];
    for(int i=0;i<3;i++)
{
    
    if(sum[i]>max){

     max=sum[i];
    }
}
printf("\n%d",max);

}