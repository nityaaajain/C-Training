#include<stdio.h>
int main (){
    int arr[3][3]={ {1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("--------------------------\n");
    for(int j=0;j<3;j++)
    {
        int i=0;
        printf("%d ",arr[i][j]);
    }
    for(int i=1;i<3;i++){
        for(int j=1;j<3;j++){
            if(i+j==2){
              printf("%d ",arr[i][j]);
            }
        }
        
    }
    for(int j=0;j<3;j++)
    {
        int i=2;
        printf("%d ",arr[i][j]);
    }




}