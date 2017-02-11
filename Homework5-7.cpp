#include <stdio.h>
int main()
{																	//逆向思维，看0~15内谁的平方落在0~200内
	int n = 0, n2 = 0;												//指示0~15开始起点，并初始化n2为0以能够成功进入循环
	for (; n2 <= 200; n++)
	{
		n2 = n * n;
		if (n2 >= 100 && n2 <= 200)									//要是落在范围内，就输出这一组数据
			printf("%d Is The Square Number Of %d\n", n2, n);
	}
	getchar();														//暂停，防止程序结束，利用已经包括进来的<stdio.h>，以节省空间
	return 0;
}