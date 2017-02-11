//a Example of MaoPao PaiXu ,swap by fx
#include <stdio.h>
void swap(int* p, int i, int j)
{
	int t;
	t = *(p + i);
	*(p + i) = *(p + j);
	*(p + j) = t;
}
int main()
{
	void swap(int* p, int i, int j);
	int box[10] = { 42,75,29,18,-3243,145,1532,-178,2,88 };
	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (box[i] < box[j])
				;
			else
				swap(box, i, j);
		}
	}
	for (int t = 0; t < 10; t++)
	{
		printf("Box[%d] = %d\n", t, box[t]);
	}
	getchar();
	return 0;
}