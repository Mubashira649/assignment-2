#include<stdio.h>
#include<conio.h>
int main()
{
int math,science,totalpercentage;
printf("Enter the percentage for math ");
scanf("%d", &math);
printf("Enter the percentage for science ");
scanf("%d", &science);
totalpercentage= math + science;
if (totalpercentage >= 50){
	printf("you are eligible for admission");
	if (totalpercentage >= 80){
	printf("you are qualify for scholarship");
}
}
else{
printf("you are not qualify for scholarship");
}
getch();
}
