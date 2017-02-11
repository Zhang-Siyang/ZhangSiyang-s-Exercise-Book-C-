#include <stdio.h>
#include <limits.h>
#include <math.h>
int main()
{
	double x, n;
	for (x = 1; x < 65530; x += 100)
	{
		n = pow((1 + 1 / x), x);
		printf("%f\n", n);
	}
	getchar();
	return 0;
}