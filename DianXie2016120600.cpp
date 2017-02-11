#include <stdio.h>
int main()
{
	int x = 90;
	if (x % 15 == 0)
	{
		if (x % 17 == 0)
		{
			if (x % 19 == 0)
				printf("Yes!");
			else
				printf("No.");
		}
		else
			printf("No.");
	}
	else
		printf("No.");
	return 0;
}