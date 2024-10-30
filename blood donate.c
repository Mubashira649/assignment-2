#include<stdio.h>
#include<conio.h>
int main ()
{
int age ;
float weight;
printf("Enter your age ");
scanf("%d",& age);
printf("Enter your weight ");
scanf("%f",& weight);
if (age >= 18 && age <=65)
{
printf("you are eligible to donate blood ");}
if (weight <= 50)
{printf("you are not eligible to donate blood due to low weight ");}
getch();
}