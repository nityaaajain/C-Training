#include <stdio.h>
int main(){
    int n;
    system("cls");
    printf("Enter a No. to check if it is Palindrome or not:");
    scanf("%d",&n);
    int rev=0;
    int num=n;
    

    while(num!=0)
    {
        int l;
        l=num%10;
        rev=rev*10+l;
        num=num/10;

    }
    if(n==rev)
    printf("No. is palindrome");
    else 
    printf("No. is not Palindrome\n");
    return 0;

}