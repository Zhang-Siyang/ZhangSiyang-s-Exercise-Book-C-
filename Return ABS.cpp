#include <stdio.h>
int main()
{
	int c = 1, sum = 0, fa = 1;
	do
	{
		fa = fa*c;
		sum = sum + fa;
		c++;
	}
	while ((1 / fa) > 0.000001);
	printf("e=%f", sum);
	return 0;
}