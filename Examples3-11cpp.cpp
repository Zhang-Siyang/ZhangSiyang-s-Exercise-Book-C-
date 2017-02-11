#include "stdio.h"
int main()
{
	char a[50], b[50], *p = b;
	gets_s(a, 49);
	gets_s(p, 49);
	printf("\nReply:\n\n");
	puts(a);
	puts(p);
	getcher();
	return 0;
}