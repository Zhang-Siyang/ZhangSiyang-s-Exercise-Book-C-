#include <stdio.h>			//计算从800到900之间所有偶数之和
#define LOWER 800
#define HIGHER 900
//Step = 2 !!!
int main()
{
	int sum = 0, lower, higher;
	lower = LOWER;
	higher = HIGHER;
	while (lower <= higher)
	{
		sum = sum + lower;
		lower += 2;
	}
	lower = LOWER;
	printf("The Sum Of All Even Numbers From %d To %d Is %d\n", lower, higher, sum);		//又忘记打换行符了!!!
	getchar();
	return 0;
}