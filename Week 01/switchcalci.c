#include <stdio.h>
int main (){
    
    int a,b;
    system("cls");
    int c;
    printf("Enter first no.:");
    scanf("%d",&a);
    printf("Enter second no.:");
    scanf("%d",&b);
    printf("Enter 1 for addition choice.");
    printf("\nEnter 2 for subtraction choice.");
    printf("\nEnter 3 for multiplication choice.");
    printf("\nEnter 4 for Division choice.");
    printf("\nChoice:");
    scanf("%d",&c);
    switch(c)
    {
        case 1: printf("addition is %d",a+b);
        break;
        case 2:printf("subtraction is %d",a-b);
        break;
        case 3: printf("multiplication is %d", a*b);
        break;
        case 4: printf("division is %d",a/b);
        break;
        default: printf("Invalid choice");
        break;
    }
    return 0;
}    