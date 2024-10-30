#include <stdio.h>
int main() {
    int sub1, sub2, sub3;
    float average;
    printf("Enter marks in Subject 1: ");
    scanf("%d", &sub1);
    printf("Enter marks in Subject 2: ");
    scanf("%d", &sub2);
    printf("Enter marks in Subject 3: ");
    scanf("%d", &sub3);
    average = (sub1 + sub2 + sub3) / 3;
    printf("Average: %.2f\n", average);
    if (average < 50) {
        printf("Grade: F (Fail)\n");
    } else if (average > 75) {
        printf("Grade: A\n");
    } else {
        printf("Grade: B\n");
    }
    return 0;
}
