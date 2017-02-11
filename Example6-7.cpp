#include <stdio.h>
#define N 500
int main()
{
	long long f[N] = { 1,1 };
	int i;
	for (i = 2; i<N; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
	}
	i = 0;
	while (i<N)
	{
		printf("%-20lld\t", f[i]);			//记住，long long 输出时使用 %lld
		i++;
		if (!(i % 4))						//已经 +1 了，直接膜 4 判断是否换行
			printf("\n");
	}
	printf("\n");
	return 0;
}