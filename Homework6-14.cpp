//空格隔开的英文数组，将首字母转换为大写
#include <stdio.h>
#define LONG 30				//最大单词词长
int main()
{
	char box[LONG];
	int i;
	while (1)
	{
		for (i = 0; i < LONG; i++)
		{
			scanf("%c", &box[i]);
			if (box[i] == ' ')
			{
				i = 0;
				printf(" ");
				break;
			}
			if (i == 0 && box[0] > 96 && box[0] < 123)
				box[0] = box[0] - 32;
			printf("%c", box[i]);
		}
	}
	getchar();
	return 0;
}