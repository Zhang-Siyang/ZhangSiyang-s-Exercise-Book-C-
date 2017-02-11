#include <stdio.h>
int main()
{
	int in, i = 1;
	printf("Please Enter Your Number:");
	scanf("%d", &in);

	switch (in)
	{																//switch后跟整数，且加花括号！
		case 6:
			i = 6 * i;
		case 5:
			i = 5 * i;
		case 4:
			i = 4 * i;
		case 3:
			i = 3 * i;
		case 2:
			i = 2 * i;
		case 1:
			{
				i = 1 * i; printf("%d\n", i); break; 
			}
		default:
			printf("Please Input The Number 1~6, Thanks!!!\n");
	}
	return 0;
}