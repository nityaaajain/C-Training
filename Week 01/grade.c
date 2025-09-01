#include<stdio.h>
int main(){
    int a=5;
    int b=34;
    if (a>=75 && b>=75)
     printf("A");
    else if(a>=65 && b>=65 && a<75 && b<75)
    printf("B");
    else if (a>= 55 && b>=55 && a<65 && b<65) 
    printf("C");
    else if (a>= 45 && b>=45 && a<55 && b<55) 
    printf("D");
    else if (a>= 35 && b>=35 && a<45 && b<45) 
    printf("E");
    else if (a<35 && b<35)
    printf("F");
    return 0;
    
}