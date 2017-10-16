#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j;
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%s","*");
		}
		printf("\n");
	}
	printf("\n");
	for (i = 10; i > 0; i--)
	{
		for (j = i; j > 0; j--)
		{
			printf("%s","*");
		}
		printf("\n");
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{

		for (j = 0; j < i; j++)
		{
			printf("%s", " ");
		}
		for (j = 0; j < 10 - i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{

		for (j = 0; j < 9 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}


	system("pause");
	return 0;
}