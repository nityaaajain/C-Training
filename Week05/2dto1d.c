#include<stdio.h>
int main (){
    int a[3][3]={ {1,2,3},{4,5,6},{7,8,9}};
    int n=3,m=3;
    int b[n+m];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    

  for(int k=0;k<n*m;k++){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){

            b[k]=a[i][j];
            printf("%d ",b[k]); 
           
        }
       
    }
    break;
  }

}