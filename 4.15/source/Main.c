#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float i,j,a,b;
	for (i = 10; i <= 12; i += 0.5)
	{
		a = (1 + 0.1*i);
		b = pow(a, 15);
		j = 5000 * b;
		printf("%.1f%  ª÷ÃB¬°%.1f\n", i, j);
	}

	system("pause");
	return 0;
}