#include<stdio.h>
int main(){
    int a[6]={1,2,3,4,5,6};
    int k=7;
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            if(a[i]+a[j]==k)
            printf("a[%d]+a[%d]=%d\n",i,j,k);
        }
    }
}