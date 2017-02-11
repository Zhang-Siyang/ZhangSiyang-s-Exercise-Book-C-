#include <stdio.h>
int main()
{
	unsigned int x, y;
	scanf("%d%d", &x, &y);
	if (x > y)
		printf("%d\t%d\n", x, y);

	else
		printf("%d\t%d\n", y, x);
	getchar();
	return 0;
}