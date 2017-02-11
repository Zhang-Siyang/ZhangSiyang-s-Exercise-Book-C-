#include <stdio.h>
int main()
{
	double x, y = 233;
	scanf("%Lf", &x);
	if (-10 <= x&&x <= 4) {
		y = x - 2;
		if (y < 0)														//判定Y是否小于零
			y = -y;														//如果是，就交换
		else;															//判定及交换结束
	}
	else if (5 <= x&&x <= 7)
		y = x + 10;
	else if (8 <= x&&x <= 12)
		y = x*x*x*x;
	else printf("No answer.");

	if (y != 233)
			printf("y=%.2Lf", y);				//jia dou hao

	return 0;
}