#include<stdio.h>
int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,9};
    int o=0,e=0;
    for(int i=0;i<10;i++){
        if(a[i]%2==0)
        e++;
        else
        o++;

      

    }
    printf("No. of even numbers:%d",e);
    printf("\nNo. of odd numbers:%d",o);

        
}