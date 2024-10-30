
#include <stdio.h>
int main() {
    float accountBalance, withdrawalAmount;
    char specialPermit;
    printf("Enter account balance: ");
    scanf("%f", &accountBalance);
    printf("Enter withdrawal amount: ");
    scanf("%f", &withdrawalAmount);
    if (accountBalance >= withdrawalAmount) {
        if (withdrawalAmount > 10000) {
            printf("Do you have a special withdrawal permit? (y/n): ");
            scanf(" %c", &specialPermit);
            if (specialPermit == 'y' || specialPermit == 'Y') {
                printf("Withdrawal approved.\n");
                printf("Remaining balance: %.2f\n", accountBalance - withdrawalAmount);
            } else {
                printf("Withdrawal denied (no special permit).\n");
            }
        } else {
            printf("Withdrawal approved.\n");
            printf("Remaining balance: %.2f\n", accountBalance - withdrawalAmount);
        }
    } else {
        printf("Withdrawal denied (insufficient balance).\n");
    }
    return 0;
}