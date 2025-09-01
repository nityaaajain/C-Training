#include <stdio.h>
int main(){
    int a=5;
    system("cls");
    switch(a)
    {
        case 1: printf("Monday");
        break;   
        case 2: printf("Tuesday");
        break;      
        case 3: printf("Wednesday");
        break; 
        case 4: printf("Thursday");
        break;
        case 5: printf("Friday");
        break;
        case 6: printf("Saturday");
        break;
        case 7: printf("Sunday");
        break;   
        default: printf("Only 7 days are present in a week");
        

    }
}