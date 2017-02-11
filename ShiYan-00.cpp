#include <stdio.h>
int main()
{
	int a[2][3] = {1,2,3,4,5,6};
	int *box = a[0];
	for (int i = 0; i < 6; i++)
		printf("%d = %d\n", i, *box++);
	getchar();
	return 0;
}