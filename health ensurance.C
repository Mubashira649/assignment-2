
#include <stdio.h>
int main() {
    int age;
    char seriousIllness;
    printf("Enter age: ");
    scanf("%d", &age);
    if (age >= 18) {
        if (age > 45) {
            printf("Have you had any serious illness? (y/n): ");
            scanf(" %c", &seriousIllness);
            if (seriousIllness == 'y' || seriousIllness == 'Y') {
                printf("Not eligible for health insurance.\n");
            } else {
                printf("Eligible for health insurance.\n");
            }
        } else {
            printf("Eligible for health insurance.\n");
        }
    } else {
        printf("Not eligible for health insurance (below 18).\n");
    }
    return 0;
}
