#include <stdio.h>		//仅适用于成绩为整数。设计学生数量为 5 人。
int main()
{
	int i, n = 0;						//i便于数组使用，n用于存放优秀学生数量
	long c[10];
	double box = 0.0;					//平均分
	for (i = 0; i<10; i++)				//获取学号及分数
	{
		scanf("%ld", &c[i]);			//学号
		scanf("%ld", &c[++i]);			//分数
		box += c[i];					//分数累加
	}
	box /= 5;							//求平均分，分数总和被覆盖
	for (i = 1; i<10; i += 2)			//计算优秀学生个数
	{
		if (c[i]>box)
			n++;
	}
	printf("%f\t%d\n", box, n);			//输出结果
	return 0;
}