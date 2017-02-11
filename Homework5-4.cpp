#include <stdio.h>
int main()
{
	double pi = 0, fuhao = 1, i = 1;
	int n = 1;		//次数计数
	while (i>1e-6)
	{
		i = fuhao / n;
		pi = pi + i;
		n += 2;
		fuhao = -fuhao;
		if (i<0)
			i = -i;
	}
	printf("%f\n", 4 * pi);
	getchar();
	return 0;
}