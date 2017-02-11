#include <stdio.h>											//°ÙÇ®°Ù¼¦
int main()
{
	int x, g, m;
	for (x = 0; x < 100; x++)
	{
		for (g = 0; g < 20; g++)
		{
			for (m = 0; m < 34; m++)
				if (x % 3 == 0 && x / 3 + 5 * g + 3 * m == 100 && x + g + m == 100)
					printf("%d\t%d\t%d\n", g, m, x);
		}
	}
	return 0;
}