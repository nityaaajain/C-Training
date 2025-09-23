#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int s=0;
    int end=4;
    int c=11;
    int mid=-1;
    if(c<=a[end]){
    while(s<=end){
        mid=(s+end)/2;
        if(a[mid]==c){
            break;
        }
        else if(a[mid]<c)
         s=mid+1;
        else
         end=mid-1;
    }
    
}
printf("%d",mid);
}