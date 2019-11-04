#include<stdio.h>
int main()
{
	double i,  s, s1,s2,s4,s6,s10;
	int b;
	scanf_s("%lf", &i);
	s1 = 100000 * 0.1;
	s2 = s1 + 100000 * 0.075;
	s4 = s2 + 200000 * 0.05;
	s6 = s4 + 200000 * 0.3;
	s10 = s6 + 400000 * 0.015;
	b = i / 100000;
	if (b > 10)
	{
		b = 10;
	}
	switch (b)
	{
	case 0:
		s = i * 0.1; break;
	case 1:
		s = s1 + (i - 100000) * 0.075; break;
	case 2:
	case 3:
		s = s2 + (i - 200000) * 0.05; break;
	case 4:
	case 5:
		s = s4 + (i - 400000) * 0.03; break;
	case 6:
	case 7:
	case 8:
	case 9:
		s = s6 + (i- 600000) * 0.015; break;
	case 10:
		s = s10 + (i - 1000000) * 0.01; break;
	}
	printf("%.2f", s);
	return 0;
}
