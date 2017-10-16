#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b;
	printf("Enter # of ours worked:");
	scanf_s("%d", &a);
	printf("Enter hourly rate of the worker:");
	scanf_s("%d", &b);
	if (a <= 40)
	{
		printf("Salary is $%d", a*b);
	}
	else
	{
		printf("Salary is $%.2f",40 * b + (a - 40)*b*1.5);
	}
	system("pause");
	return 0;
}