#include <stdio.h>			//�����800��900֮������ż��֮��
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
	printf("The Sum Of All Even Numbers From %d To %d Is %d\n", lower, higher, sum);		//�����Ǵ��з���!!!
	getchar();
	return 0;
}