
#include <stdio.h>
int main() {
    float amount;
    char isMember;
    printf("Enter purchase amount: ");
    scanf("%f", &amount);
    if (amount > 2000) {
        printf("Are you a member? (y/n): ");
        scanf(" %c", &isMember);
        if (isMember == 'y' || isMember == 'Y') {
            printf("Discount: 20%%\n");
            amount *= 0.80; 
        } else {
            printf("Discount: 10%%\n");
            amount *= 0.90; 
        }
    } else {
        printf("No discount applicable.\n");
    }
    printf("Final Amount: Rs. %.2f\n", amount);

    return 0;
}
