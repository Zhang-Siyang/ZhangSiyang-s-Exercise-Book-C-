#include <stdio.h>
int main()
{
	char a, b, c;
	for (a = 1; a < 5; a++)
	{
		for (b = 1; b < 5; b++)
		{
			for (c = 1; c < 5; c++)
			{
				if (a != b&&b != c&&a != c)
					printf("%d%d%d\n", a, b, c);
			}
		}
	}
	return 0;
}