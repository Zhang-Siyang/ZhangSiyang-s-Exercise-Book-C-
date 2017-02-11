//a example of XuanZe PaiXu, With t
#include <stdio.h>
int main()
{
	int box[10] = { 42,75,29,18,-3243,145,1532,-178,2,88 };
	int t, min;
	for (int i = 0; i < 9; i++)
	{
		min = i;
		for (int j = i + 1; j < 10; j++)
		{
			if (box[min] < box[j])
				;
			else
				min = j;
		}
		if (min != i)
		{
			t = box[i];
			box[i] = box[min];
			box[min] = t;
		}
	}
	for (t = 0; t < 10; t++)
	{
		printf("Box[%d] = %d\n", t, box[t]);
	}
	getchar();
	return 0;
}