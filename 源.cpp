#include<stdio.h>
int main()
{
	int a, b;
	scanf_s("(%d,%d)", &a, &b);
	if ((a == 2 || a == -2) && (b == -2 || b == 2))
	{
		printf("�����߶�Ϊ10");
	}
	else
		printf("�����߶�Ϊ0");
	return 0;
}
