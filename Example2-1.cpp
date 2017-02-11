#include <stdio.h>
int main()
{
	char x, y, z;
	x = 'a';
	y = 3 + x;
	printf("%c\t%d\n", x, x);
	printf("%c\t%d\n", y, y);
	x = -28;
	z = 98 + x;
	printf("%c\t%d\n", x, x);
	printf("%c\t%d\n", z, z);
	getchar();
	return 0;
}