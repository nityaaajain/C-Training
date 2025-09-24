#include<stdio.h>
int main (){
    int a[4][4]={ {1,2,3},{4,5,6},{7,8,9}};   
        for(int j=0;j<3;j++){
            int i =0;
            printf("%d ",a[i][j]);
        }         
    for(int i=1;i<3;i++){
       int j=2;
         printf("%d ",a[i][j]);
    }
    for(int j=1;j>=0;j--){
        int i=2;
         printf("%d ",a[i][j]);   
    }
    for(int j=0;j<=1;j++){
        int i=1;
        printf("%d ",a[i][j]);
    }
}