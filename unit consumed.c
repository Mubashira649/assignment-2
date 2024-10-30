#include<stdio.h>
#include<conio.h>
int main()
{
float unitconsumed,billamount;
printf("Enter the unitconsumed");
scanf("%f",&unitconsumed);
if (unitconsumed <=100)
{
	printf("billamount = 0");
}
else if (unitconsumed <= 200 )
{
	printf("billamount=unitconsumed *5 "); 
}
else if (unitconsumed <=300){
	printf("billconsumed=unitconsumed *8 ");
}
else if (unitconsumed>=300){
	printf("billconsumed=unitconsumed *10 ");
}
else if (unitconsumed > 300)
{
	printf("10 rupees per unit");
}
getch();
}
