#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b, c, d, e, f;
	printf("Enter account number (-1 to end):");
	scanf_s("%d", &a);//�b��
	printf("Enter beginning balance:");
	scanf_s("%d", &b);//��쥼�I�M�l�B
	printf("Enter total charges:");
	scanf_s("%d", &c);//����ñ�b�ڶ�
	printf("Enter total credits:");
	scanf_s("%d", &d);//����w�I�ڶ�
	printf("Enter credit limit:");
	scanf_s("%d", &e);//���\�H���B��
	printf("Account:     %d\n", a);
	printf("Credit limit:%d\n", e);
	printf("Balance:     %d\n", b + c-d);
	if (b+c-d>e)
	{
		printf("Credit Limit Exceeded.\n");
	}
	system("pause");
	return 0;
}