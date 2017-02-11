#include <stdio.h>
int main()
{
	int y(int n);
	int x;
	scanf("%d", &x);
	printf("%d\n", y(x));
	return 0;
}
int y(int n)
{
	if (n < 0)
		return -1;
	else if (n == 0)
		return 0;
	else
		return 1;
}