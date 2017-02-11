#define beishu 1.60934											//定义符号常量，在本程序中（也许）能节省字数
#include <stdio.h>
int main()
{					//注意，下文中有时进行两次换行，这是为了输出结果的美观
	float gonglishu;												//声明变量以存放公里数
	printf("******本程序可以将公里数转换为对应的英里数******\n\n"); 
	printf("现在，请输入您要转换的公里数：");						//提示输入
	scanf("%f", &gonglishu);										//接收数据
	printf("\n那么，其对应的英里数为：%-f\n\n",gonglishu/beishu);	//打印结果
	return 0;
}
/*
上文第九行中

printf("\n那么，其对应的英里数为：%-f",gonglishu/beishu);

括号内，引号后的(即："gonglishu/beishu")为一计算式
*/																//by 张思扬