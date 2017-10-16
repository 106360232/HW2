#include <stdio.h>
#include <stdlib.h>
int main()
{
	float a;
	printf("Enter sales in dollars(-1 to end): ");
	scanf_s("%f", &a);
	printf("Salary is: $%.2f", (a*0.09) + 200);
	system("pause");
	return 0;
}