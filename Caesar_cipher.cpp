#include <stdio.h>
int main()
{
	int n;
	char c;
	char huiche;
	printf("���������Ŀ�������");
	scanf("%d", &n);
	n = n % 26;
	for (c = 65; (c = getchar()) != EOF; 1)
	{
		huiche = c;
		//****************************************************************���CΪ��д****************************************************************
		if (c < 91)
		{
			c = c + n;
			if (c > 90)
			{
				c = c - 26;
			}
		}
		//****************************************************************���CΪСд****************************************************************
		else
		{
			c = c + n;
			if (c > 112)
			{
				c = c - 26;
			}
		}
		if (huiche != 10)
			printf("%c", c);
	}
	return 0;
}//ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz