#include<stdio.h>
int main()
{
	int a = 0, i = 0, j = 0, e = 0, f = 0;
	{
		for (j = 9 - 1; j>-1; j--) /*����Ů�v����*/
		{
			for (i = 1; i<j + 1; i++) /*�L�Ů�*/
			{
				printf(" ");
			}
			for (e = j + 1; e<9 + 1; e++) /*�L�P�P*/
			{
				printf("* ");
			}
			printf("\n");
		}

		for (j = 1; j<9; j++) /*����Ů�v��W�[*/
		{
			for (i = j; i>0; i--) /*�L�Ů�*/
			{
				printf(" ");
			}
			for (e = 9 - j; e>0; e--) /*�L�P�P*/
			{
				printf("* ");
			}
			printf("\n");
		}
	}
	system("pause");
	return 0;
}