#include <stdio.h>
int main()
{
	double x, y;
	printf("Please Input X, I Will Give U The Y!\n");
	scanf("%Lf", &x);
	if (x < 20)y = 40 - 14*x;
	else y = 8 * x + 3;
	printf("Just Like What I Say , Y = %f", y);
	return 0;
}