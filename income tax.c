
#include <stdio.h>
int main() {
    float income, tax = 0;
    printf("Enter income: ");
    scanf("%f", &income);
    if (income > 1000000) {
        tax = (income - 1000000) * 0.15 + 50000 + 25000;
    } else if (income > 500000) {
        tax = (income - 500000) * 0.10 + 25000;
    } else if (income > 250000) {
        tax = (income - 250000) * 0.05;
    }
    printf("Income: Rs. %.2f\n", income);
    printf("Tax: Rs. %.2f\n", tax);
    return 0;
}
