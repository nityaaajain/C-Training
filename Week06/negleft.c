#include<stdio.h>
int main(){
    int a[7]={-1,3,-3,4,-4,8,7 };
    int b[7];
    int n[3],p[4];
    int j=0,k=0;
    for(int i=0;i<7;i++){
        if(a[i]<0){
            n[j]=a[i];
            j++;
        }
        else{
            p[k]=a[i];
            k++;
        }
    }
    int m=0;
    for(int i=0;i<3;i++){
        b[m]=n[i];
        m++;
    }
    for(int i=0;i<4;i++){
        b[m]=p[i];
        m++;
    }
    for(int i=0;i<7;i++)
    printf("%d ",b[i]);
    

        
    
}