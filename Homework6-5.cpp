#include <stdio.h>						//计算两个数组相应元素，并输出
#define M 3			//行数
#define N 5			//列宽
int main()
{
	int a[M][N], b[M][N], sum[M][N];
	//接收 数组A
	printf("Please Enter A Shuzu:\n");
	for (int i = 0; i < M; i++)
	{
		printf("Now, Please Enter No.%d Line.[At A]\n",i+1);
		for (int j = 0; j < N; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("\n");
	//接收 数组B
	printf("Please Enter B Shuzu:\n");
	for (int i = 0; i < M; i++)
	{
		printf("Now, Please Enter No.%d Line.[At B]\n", i + 1);
		for (int j = 0; j < N; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	printf("\n");
	//加和
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("\n");
	//输出 数组SUM
	printf("Sum:\n");
	for (int i = 0; i < M; i++)
	{
		printf("Line %2d :\t", i + 1);
		for (int j = 0; j < N; j++)
		{
			printf("%-4d\t", sum[i][j]);
		}
		printf("\n");
	}
	getchar();
	return 0;
}