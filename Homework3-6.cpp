//本程序与练习3-5本质上极为相似，输入一个数据，简单计算后，再次输出
#include <stdio.h>
int main()
{
	float huashi;
	printf("请输入要转换为摄氏度的华氏度：");			//本来也想在这里加一个℃的，结果想不到能实现的方法……
	scanf("%f", &huashi);
	printf("结果应为：%-f℉\n", (huashi - 32)*5.0 / 9);
	return 0;
}														//by 张思扬