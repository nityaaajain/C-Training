#include <stdio.h>
int main(){
    int i=0,j=0,k=0;
    int a[]={2,4,6,8,13};
    int b[]={4,6,13,1,3,11,12};
    int c[100];
    for(i=0;i<5;i++){
        for(j=0;j<7;j++){
            if(a[i]==b[j]){
                c[k]=a[i];
                k++;
            }
        }
    }
    for(i=0;i<3;i++){
        printf("%d ",c[i]);
    }



}