#include <stdio.h>
int main(){
    int leftMax[6];
          int a[6]=        {4,2,0,3,2,5};
    int rightMax[6];
    int water=0;
    leftMax[0]=a[0];
    for(int i =1;i<6;i++){
        if(a[i]>leftMax[i-1]){
            leftMax[i]=a[i];
        }else{
            leftMax[i]=leftMax[i-1];
        }
    }
        rightMax[5]=a[5];
     for(int i =3;i>=0;i--){
        if(a[i]>rightMax[i+1]){
            rightMax[i]=a[i];
        }else{
            rightMax[i]=rightMax[i+1];
        }
    }


    for(int i=0;i<6;i++){
    int minHieght;
        if(leftMax[i]<rightMax[i]){
            minHieght=leftMax[i];
        }else 
        {
            minHieght=rightMax[i];
        }
        water=water+(minHieght-a[i]);
        
    }
    printf("%d",water);
    
}