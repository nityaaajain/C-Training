#include<stdio.h>
int sumofdigit(int num){
    
    int sum=0;
    int f;
    if(num>10){
      start:
     // sum=0;
    while(num>0)
    {
        int l;
        l=num%10;
        sum=sum+l;
        num=num/10;
    }

    if(sum>9){
          num=sum;
          sum=0;
          goto start;}
    if(sum==1)
      f=1;
    else 
      f=0;

    }
    return f;
}
/*
int check(sum){
    if(sum>10)
      sumofdigit(sum);
    else if(sum==1)
      return 0;
    else 
     return 1;  


}*/

int main(){

    int num=1234,f;
    f=sumofdigit(num);
    if(f)
    printf("Magiccc");
    else 
    printf("Not Magic :(");

}