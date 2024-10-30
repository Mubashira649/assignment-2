
#include <stdio.h>
int main() {
    float monthlyIncome;
    char existingLoan, overduePayments;
    printf("Enter monthly income: ");
    scanf("%f", &monthlyIncome);
    if (monthlyIncome >= 30000) {
        printf("Do you have an existing loan? (y/n): ");
        scanf(" %c", &existingLoan);
        if (existingLoan == 'y' || existingLoan == 'Y') {
            printf("Do you have any overdue payments? (y/n): ");
            scanf(" %c", &overduePayments);
            if (overduePayments == 'y' || overduePayments == 'Y') {
                printf("Ineligible for loan (overdue payments).\n");
            } else {
                printf("Eligible for loan.\n");
            }
        } else {
            printf("Eligible for loan.\n");
        }
    } else {
        printf("Ineligible for loan (low income).\n");
    }
    return 0;
}