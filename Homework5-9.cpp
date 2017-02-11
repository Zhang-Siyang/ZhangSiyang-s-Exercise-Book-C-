#include <stdio.h>
#include <stdlib.h>
#define N 1e-6
int main()
{
	double a, b, l, r, x, c;

	printf("本程序可求解一元一次方程。请将您要求解的方程化为 Y=AX+B 形式,并输入二分法左右端点。\n");
	printf("以空格间隔，按回车结束：");
	scanf("%lf%lflflf", &a, &b, &l, &r);

	if ((a*l + b)*(a*r + b) > 0)
	{
		printf("端点值输入错误，程序即将结束.");
		getchar();
		abort();
	}
	if (a*l > 0)
	{
		x = l;
		l = r;
		r = x;
	}
	do
	{
		
	}
}