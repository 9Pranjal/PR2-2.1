#include<stdio.h>
#include<conio.h>
void main(){
	clrscr();
	int a,b;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("\nEnter the value of b:");
	scanf("%d",&b);
	printf("\nsum of %d & %d is %d",a,b,a+b);
	printf("\nsub of %d & %d is %d",a,b,a-b);
	printf("\nmul of %d & %d is %d",a,b,a*b);
	printf("\ndiv of %d & %d is %d",a,b,a/b);
	printf("\nmod of %d & %d is %d",a,b,a%b);
	getch();
}