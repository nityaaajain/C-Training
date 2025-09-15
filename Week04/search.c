#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    int a=2;
    int f;
    for(int i=0;i<10;i++)
      if(arr[i]==a){

      f=1;
      break;

    }
    if(f==1)
    printf("True");
    else
     printf("False");

        
}