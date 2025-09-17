#include <stdio.h>
int main(){
    int n=1234;
    int count=1;
    int p;
    while(n!=0)
    {
        p=n%10;
        n=n/10;
        
        count=count*p;
    }
    printf("%d",count);
    return 0;

}