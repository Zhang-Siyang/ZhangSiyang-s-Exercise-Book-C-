#include <stdio.h>
int main()
{
	long sum = 0, i = 1;
	while (i <= 100)
	{
		sum = sum + i*i;
		i++;
	}
	printf("sum=%d\n", sum);
	return 0;
}