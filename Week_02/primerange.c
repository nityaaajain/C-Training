#include <stdio.h>
int main(){
    int n=100;
    int p;

    for(int i=2;i<=n;i++)
    {
       int j=1;
        for(int j=2; j<=i/2;j++)
      {
        if (i%j==0)
     { 
       j=0;
       break;
    }
   
      
      }
      if(j==1)
      printf("%d ",i);
    }
}