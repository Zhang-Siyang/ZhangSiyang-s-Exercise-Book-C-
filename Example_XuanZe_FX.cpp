//a example of XuanZe Pai Xu, by fx
#include <stdio.h>
void swap(int *p, int i, int j)
{
	int t = *(p + i);
	*(p + i) = *(p + j);
	*(p + j) = t;		//ÀÏÊÇ³ö´í
}
int main()
{
	int box[10] = { 42,75,29,18,-3243,145,1532,-178,2,88 };
	int i, j, min;
	for (i = 0; i < 9; i++)
	{
		min = i;
		for (j = i + 1; j < 10; j++)
		{
			if (box[min] < box[j])
				;
			else
				min = j;
		}
		if (min != i)
			swap(box, i, min);
	}
	for (i = 0; i < 10; i++)
	{
		printf("Box[%d] = %d\n", i, box[i]);
	}
	getchar();
	return 0;
}