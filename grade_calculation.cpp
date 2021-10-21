#include<stdio.h>
int main()
{
	int marks;
	printf("Enter your marks : ");
	scanf("%d", &marks);
	if(marks<0 || marks>100)
	{
		printf("Invalid marks entered .!\nTry again ..");
	}
	else if(marks<50)
	{
		printf("Grade : F\nRemarks : Needs to work hard .!");
	}
	else if(marks>=50 && marks<60)
	{
		printf("Grade : D\nRemarks : Needs Improvement .!");
	}
	else if(marks<=60 && marks<70)
	{
		printf("Grade : C\nRemarks : Satisfactory .!");
	}
	else if(marks>=70 && marks<80)
	{
		printf("Grade : B\nRemarks : Good .!");
	}
	else if(marks>=80 && marks<90)
	{
		printf("Grade : A\nRemarks : Excellent .!");
	}
	else
	{
		printf("Grade : A+\nRemarks : Marvellous .!");
	}
	return 0;
}
