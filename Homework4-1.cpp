//输入矩形长与宽，计算，面积并输出
#include <stdio.h>
int main()
{
	long double chang,kuan;														//变量之间忘记加空格
	printf("请不带单位地输入矩形的长与宽，以空格键分隔，以回车键结束\n");		//忘记加换行符
	scanf_s("%Lf%Lf", &chang, &kuan);											//这里有条件用 scanf_s 就用吧，scanf 也行
	printf("\n这个矩形的面积为：%lf\n", chang*kuan);							//又忘了加换行符……
	return 0;
}																//By 张思扬