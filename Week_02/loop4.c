#include <stdio.h>
int main(){
    int num=123;
    int rev=0;
    

    while(num>0)
    {
        int l;
        l=num%10;
        rev=rev*10+l;
        num=num/10;

    }
    printf("%d",rev);
    return 0;

}