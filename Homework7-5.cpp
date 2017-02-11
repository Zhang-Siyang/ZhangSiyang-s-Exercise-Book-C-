#include <stdio.h>
#include <math.h>
int main()
{
	int sushu(int n);
	int n;
	while (1)
	{
		printf("(Enter -1 To quit)Please Enter N(int) :");
		scanf("%d", &n);
		if (n == -1)
			break;
		if (sushu(n) != 0)
			printf("%d Is a Prime number.\n", n);
		else
			printf("%d is not a Prime number.\n",n);
		getchar();

	}
	getchar();
	getchar();
	return 0;
}
int sushu(int n)
{
	int i, r = (int)sqrt(n);	//强制转换返回值类型
	for (i = 2; i <= r; i++)	//error i = 2
	{
		if (n%i == 0)			//不能从零开始除
			break;
	}
	if (i == r + 1)				//r+1 or r?
		return n;
	else
		return 0;
}