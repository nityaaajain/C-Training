#include <stdio.h>
int main(){
    int a=5;
    system("cls");
    switch(a)
    {
        case 1: printf("Winner");
        break;
        case 2: printf("First loser ");
        break;
        case 3: printf("Top 3");
        break;
        default: printf("Ranking not on leaderboard \nBetter luck next time");
        

    }
}