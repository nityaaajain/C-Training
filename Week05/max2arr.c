#include<stdio.h>
int main (){
    int a[2][2]={ {1,2},{4,5},};
    int b[2][2]={ {3,6},{7,7}};
    int m1=a[0][0],m2=b[0][0];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
           if(a[i][j]>m1)
           m1=a[i][j];
        }
    }   
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
           if(b[i][j]>m2)
           m2=b[i][j];
        }
    }  
    if(m1>m2)
    printf("In First Array %d",m1);
    else
    printf("In Second Array %d",m2);
}