#include <stdio.h>
#include <stdlib.h>
int main()
{
	float a, b, c;
	printf("Enter loan principal:");
	scanf_s("%f", &a);
	printf("Enter interst rate:");
	scanf_s("%f", &b);
	printf("Enter term of the loan in days:");
	scanf_s("%f", &c);
	printf("The interest charge is $%.2f", a*b*c / 365);
	system("pause");
}