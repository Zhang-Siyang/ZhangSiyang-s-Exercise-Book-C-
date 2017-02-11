//a example of MaoPao PaiXu ,that swap with t
#include <stdio.h>
int main()
{
	int box[10] = { 42,75,29,18,-3243,145,1532,-178,2,88 };
	int t;
	for (int i = 0; i < 9; i++)			// i < 9
	{
		for (int j = i+1; j < 10; j++)	// i < 10
		{
			if (box[i] < box[j])
				;
			else
			{
				t = box[i];
				box[i] = box[j];
				box[j] = t;
			}
		}
	}
	for (t = 0; t < 10; t++)
	{
		printf("%2d = %-6d\n", t, box[t]);
	}
	getchar();
	return 0;
}