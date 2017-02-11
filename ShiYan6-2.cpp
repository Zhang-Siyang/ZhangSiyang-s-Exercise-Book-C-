#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c, sanjiao;

	printf("本程序可求解一元一次方程 及 一元二次方程。请将您要求解的方程化为 Y=AX^2+BX+C 形式。\n");
	printf("请依次输入 A B C ，以空格间隔:");

	scanf("%lf%lf%lf", &a, &b, &c);
	printf("\n");
	if (a == 0)
	{
		if (c == 0)
			printf("本方程只有一个解: X = 0\n");
		else
		{
			printf("本方程只有一个解:X=%f\n", -(b / c));
		}
	}

	else
	{
		sanjiao = b*b - 4 * a*c;
		if (sanjiao < 0)
			printf("该方程无解\n");
		else if (sanjiao == 0)
		{
			printf("本方程只有一个解:X=%f\n", -(b / 2 * a));
		}
		else
		{
			printf("本方程有两个解 : X = %f , X = %f\n", -(b + sqrt(sanjiao) / 2 * a), -(b - sqrt(sanjiao) / 2 * a));
		}
	}
	getchar();
	return 0;
}