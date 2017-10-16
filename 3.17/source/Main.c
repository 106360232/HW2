#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b, c, d, e, f;
	printf("Enter account number (-1 to end):");
	scanf_s("%d", &a);//帳號
	printf("Enter beginning balance:");
	scanf_s("%d", &b);//月初未付清餘額
	printf("Enter total charges:");
	scanf_s("%d", &c);//本月簽帳款項
	printf("Enter total credits:");
	scanf_s("%d", &d);//本月已付款項
	printf("Enter credit limit:");
	scanf_s("%d", &e);//允許信用額度
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