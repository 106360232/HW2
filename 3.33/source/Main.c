#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b, i, j;
	printf("�п�J�x�Ϊ���:");
	scanf_s("%d", &a);
	printf("�п�J�x�Ϊ��e:");
	scanf_s("%d", &b);
	a = a - 2;
	for (i = 0; i < b; i++)
		printf("+");
	for (i = 0; i < a; i++)
	{
		printf("\n+");
		for (j = 0; j < (b - 2); j++)
			printf(" ");
		printf("+");
	}
	printf("\n");
	for (i = 0; i < b; i++)
		printf("+");

	system("pause");
	return 0;



}