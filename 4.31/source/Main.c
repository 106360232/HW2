#include<stdio.h>
int main()
{
	int a = 0, i = 0, j = 0, e = 0, f = 0;
	{
		for (j = 9 - 1; j>-1; j--) /*控制空格逐行減少*/
		{
			for (i = 1; i<j + 1; i++) /*印空格*/
			{
				printf(" ");
			}
			for (e = j + 1; e<9 + 1; e++) /*印星星*/
			{
				printf("* ");
			}
			printf("\n");
		}

		for (j = 1; j<9; j++) /*控制空格逐行增加*/
		{
			for (i = j; i>0; i--) /*印空格*/
			{
				printf(" ");
			}
			for (e = 9 - j; e>0; e--) /*印星星*/
			{
				printf("* ");
			}
			printf("\n");
		}
	}
	system("pause");
	return 0;
}