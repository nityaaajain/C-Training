#include <stdio.h>
#include <stdlib.h>

int main() {
    int ch;
    float rup, r;

    system("cls");  // clears screen (works in TurboC/Windows CMD)
    printf("Enter amount in Rup: ");
    scanf("%f", &rup);

    printf("Choose currency you want to convert into:\n");
    printf("1. Dollar\n2. Yen\n3. Won\n4. Pound\n5. Dinar\n");
    scanf("%d", &ch);

    switch (ch) {
        case 1:
         r = rup / 83.0;
            printf("%.2f Rup = %.2f Dollar\n", rup, r);
            break;
        case 2:
         r = rup / 0.56;
            printf("%.2f Rup = %.2f Yen\n", rup, r);
            break;
        case 3:
         r = rup / 0.064;
            printf("%.2f Rup = %.2f Won\n", rup, r);
            break;
        case 4:
         r = rup / 105.0;
            printf("%.2f Rup = %.2f Pound\n", rup, r);
            break;
        case 5:
         r = rup / 275.0;
            printf("%.2f Rup = %.2f Dinar\n", rup, r);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
