#include <stdio.h>
#define N 100							//可以用来比较 10 个数
int main()
{
	int box[N], i, j, t;				//i为了使用数组，j为了比较 { 代表被比较的 下一个数 }
	for (i = 0; i<N; i++)
		scanf_s("%d", &box[i]);			//！！！没有添加 取地址 符号
	for (i = 0; i<N; i++)
	{
		for (j = i; j<N; j++)
		{
			if (box[i]<box[j])
			{							//！！！比较逻辑错误，j 与 i 混乱
				t = box[i];
				box[i] = box[j];
				box[j] = t;
			}
		}
	}
	for (i = 0; i<N; i++)
	{
		printf("%d\t", box[i]);
		if ((i - 1) % 4 == 0)
			printf("\n");
	}
	return 0;
}