#include <stdio.h>
int main()
{
	double num[4], t;
	int i, j;

	//开始录入数据

	printf("Please Enter Four Number:");
	for (i = 0; i < 4; i++)
		scanf_s("%lf", &num[i]);

	//开始两两比较，挨个调整

	for (i = 0; i < 4; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (num[i] < num[j])
			{											//Son Of Bitch, Zhen TM Nan Xie!!!
				t = num[i];
				num[i] = num[j];
				num[j] = t;
			}
		}
	}

	//开始输出

	for (i = 0; i < 4; i++)
	{
		printf("\n%f\n", num[i]);
	}
	printf("\n");

	//输出结束，交差下班

	return 0;
}