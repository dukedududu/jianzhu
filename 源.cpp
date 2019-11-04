#include<stdio.h>
int main()
{
	int a, b;
	scanf_s("(%d,%d)", &a, &b);
	if ((a == 2 || a == -2) && (b == -2 || b == 2))
	{
		printf("建筑高度为10");
	}
	else
		printf("建筑高度为0");
	return 0;
}
