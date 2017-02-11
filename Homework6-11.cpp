//Homework6-11__水仙花数
#include <stdio.h>
#define LOW 100
#define HIGH 999
int main()
{
	int g, s, b;
	for (int i = 100; i <= HIGH; i++)
	{
		g = i % 10;
		s = (i / 10) % 10;
		b = i / 100;
		if (i == g*g*g + s*s*s + b*b*b)
			printf("%d Is A ShuiXianHuaShu.[%d = %d^3 + %d^3 + %d^3]\n", i, i, b, s, g);
		//printf("------    %d    %d    %d    %d\n", i, b, s, g);
	}
	return 0;
}
/*
添加输出语句以检查程序失败原因;
取百位时出现错误
{
	s = (i / 10) % 10;					//正确
	s = i / 10;							//错误
}
*/