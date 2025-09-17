#include <stdio.h>
int main()
{
   int p=13;
   int j;
   system("cls");
   for(int i=2; i<p/2;i++)
   {
    if (p%i==0)
     { j=0;
      break;}
   
      else 
      j=1;
   }
   if(j==1)
   printf("Prime\n");
   else 
   printf("Not Prime\n");
   return 0;

}