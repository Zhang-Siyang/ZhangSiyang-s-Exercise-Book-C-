#include <stdio.h>
int main()
{
	int box[4], min, i;

	printf("Please Input Four Number:");

	for (i = 0; i < 4; i++)
	{
		scanf("%d", &box[i]);
	}

	for (i = 0, min = box[0]; i < 4; i++)
	{
		min = (min < box[i]) ? min : box[i];
	}

	printf("The Min Is:%d\n", min);

	getchar();

	return 0;
}