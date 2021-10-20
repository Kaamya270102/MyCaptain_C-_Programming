#include<stdio.h>
int main()
{
	float a,b;
	float pro;
	printf("Enter two numbers : ");
	scanf("%f %f", &a, &b);
	pro = a * b;
	printf("Product = %.1f", pro);
	return 0;
}
