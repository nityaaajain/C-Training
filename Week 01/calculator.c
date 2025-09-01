#include <stdio.h>
#include <conio.h>

int main (){
    int a,b,d;
    char c;
    system("cls");
    while(1){
    printf("\nEnter first no.:");
    scanf("%d",&a);
    printf("Enter second no.:");
    scanf("%d",&b);
    printf("Enter choice(+,-,*,/):\n");
    c = getch();
    if (c=='+'){
        d=a+b;
        printf("%d + %d = %d",a,b,d);
    }
    else if (c=='-')
        printf("%d - %d = %d",a,b,a-b);
    else if (c=='*')
        printf("%d * %d = %d",a,b,a*b);
    else if(c=='/')
        printf("%d / %d = %d",a,b,a/b);
    else 
        printf("\nInvalid operation\n");
    //return 0;
}
return 0;
}
