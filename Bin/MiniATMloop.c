#include <stdio.h>
#include <stdlib.h>  // For system("cls")

int main() {
    int ch;
    float bal = 1000.0;
    int pin, p = 2006;
    float amount;

    system("cls");  
    
    printf("Enter your pin: ");
    scanf("%d", &pin);  

    if (pin == p) {
        while (1) {   
            printf("\n----- MINI ATM -----\n");
            printf("1. Check Balance\n");
            printf("2. Deposit Money\n");
            printf("3. Withdraw Money\n");
            printf("4. Exit\n");
            printf("Enter your choice: ");
            scanf("%d", &ch);

            switch (ch) {
                case 1: 
                    printf("Your Current Balance is: Rs.%.2f\n", bal);
                    break;

                case 2: 
                    printf("Enter amount to deposit: Rs.");
                    scanf("%f", &amount);
                    if (amount > 0) {
                        bal += amount;
                        printf("Rs.%.2f Deposited Successfully!\n", amount);
                        printf("New Balance: Rs.%.2f\n", bal);
                    } else {
                        printf("Invalid amount!\n");
                    }
                    break;

                case 3: 
                    printf("Enter amount to withdraw: Rs.");
                    scanf("%f", &amount);
                    if (amount > 0 && amount <= bal) {
                        bal -= amount;
                        printf("Rs.%.2f Withdrawn Successfully!\n", amount);
                        printf("Remaining Balance: Rs.%.2f\n", bal);
                    } else if (amount > bal) {
                        printf("Insufficient Balance!\n");
                    } else {
                        printf("Invalid amount!\n");
                    }
                    break;

                case 4: 
                    printf("Thank you for using Mini ATM. Goodbye :)\n");
                    return 0;

                default:
                    printf("Invalid choice! Please try again.\n");
            }
        }
    } else {
        printf("Invalid Pin. Please Try Again\n");
    }

    return 0;
}
