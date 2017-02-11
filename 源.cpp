#include <stdio.h>
int main()
{
	double p = 3;
	for (int i = 2; i <= 10000000000000000000; i += 4)
	{
		p += 4 / (double(i)*(i + 1)*(i + 2));
		p -= 4 / (double(i + 2)*(i + 3)*(i + 4));
	}
	printf("pi=%.100f\n", p);
	return 0;
}