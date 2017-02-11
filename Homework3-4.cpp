#include <stdio.h>						//本程序可以从四个实数中挑选出最小数，并将其显示出来
int main()
{
	long double a, b, c, d, e, f, g;		//声明变量
	printf("Pleasr Enter Four Number:");	//提示输入四个实数
	scanf_s("%Lf%Lf%Lf%Lf", &a, &b, &c, &d);
	e = (a < b) ? a : b;					//×××××××××××××××××××××××××××
	f = (e < c) ? e : c;					//××××|从a b c d中选择出小数并将其赋给变量g|××××
	g = (f < d) ? f : d;					//×××××××××××××××××××××××××××
	printf("The Min Number is : %-16.6f\n", g);		//将小数打印出来
	return 0;								//运行完成，返回数字0（推荐步骤，也可不写，但那样主函数也要做相应调整）
}											//by 张思扬