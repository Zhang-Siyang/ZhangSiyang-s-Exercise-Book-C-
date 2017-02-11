#include <stdio.h>														//筛选出极端值，并输出
#define N 10															// 输入值 的个数
int main()
{
	int i;																//数组
	double box[N], min, max;											//BOX & 存数
																		// 输入
	printf("Please Input %d Number\n", N);
	for (i = 0; i < N; i++)
	{
		scanf("%lf", &box[i]);
	}
	//比较
	for (i = 0, max = min = box[0]; i < N; i++)
	{
		if (box[i] < min)
			min = box[i];
		if (box[i] > max)
			max = box[i];
	}
	//输出
	printf("The Min = %f , The Max = %f\n", min, max);		//总是忘记换行
	return 0;
}