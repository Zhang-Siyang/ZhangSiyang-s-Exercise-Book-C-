#include <stdio.h>		//Homework6-2,在数组中插入一个数，并使这个数组仍然排列有序在数组中插入一个数，并使这个数组仍然排列有序
#define N 10
int main()
{
	int i, j;
	double a[N],t;
	for (i = 0; i<N - 1; i++)
		a[i] = (i + 1);
	printf("Please Enter Your Number:");
	scanf("%lf", &t);
	//开始排序
	for (i = 0, j = N - 1; i<N - 1; i++)
	{
		if (a[i] < t)
			;
		else
			break;
	}
	j = i;
	for (i = N - 1; i>j; i--)
		a[i] = a[i - 1];			//之前是a[i-1]=a[i],错误
	a[j] = t;
	//排序结束
	for (i = 0; i<N; i++)
		printf("a[%d]=%f\n", i, a[i]);
	getchar();
	return 0;
}