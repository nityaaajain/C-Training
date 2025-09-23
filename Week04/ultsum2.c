#include <stdio.h>
#include <limits.h> 

int main() {
    int a[5]= {1,2,3,-4,-5};
    int max = INT_MIN; 
    int ultmax= INT_MIN;
    for(int i=0;i<5;i++){
        max=max+a[i];
        if(ultmax<max)
        ultmax=max;
        if(max<0)
        max=0;

    }
    printf("%d",ultmax);
   
}