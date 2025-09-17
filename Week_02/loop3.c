#include <stdio.h>
int main (){
    int num=123456789;
    int sum;
    while(num>0)
    {
        int l;
        l=num%10;
        sum=sum+l;
        num=num/10;

    }
    printf("%d",sum);
    return 0;
}