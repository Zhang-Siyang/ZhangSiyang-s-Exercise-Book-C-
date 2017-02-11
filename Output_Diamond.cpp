#include <stdio.h>
#define hangshu 25
int main()
{
	int i = 0, n = hangshu - 2;
	//************************数组初始化************************
	char x[hangshu];
	for (int i = 0; i < hangshu; i++)
		x[i] = 32;
	x[hangshu - 1] = 42;
	//************************开始正输出************************
	for (; n >= 0; n--)
	{
		for (; i <= hangshu - 1; i++)
			printf(" %c", x[i]);
		
		i--;

		for (; i >= 0; i--)
			printf(" %c", x[i]);

		printf("\n");
		
		i++;						//出错，应输++输成--,出现了 烫
		x[n] = 42;
	}
	return 0;
}