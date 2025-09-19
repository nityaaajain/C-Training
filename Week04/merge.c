#include <stdio.h>
int main(){
    int a[3]={1,2,3};
    int b[3]={4,5,6};
    int m=3,n=3;
    int c[m+n];
    for(int i=0; i<m;i++){
        c[i]=a[i];
    }
    for(int i=0; i<n;i++){
        c[m+i]=b[i];
    }
    for(int i=0;i<(m+n);i++)
    printf("%d\t",c[i]);
}