#include <stdio.h>
int main()
{
	double f;
	char key;
	printf("Please Input The Number Of F(OR C),and F(OR C)###Like:534.37F\n");
	scanf("%lf%c", &f, &key);
	if (key == 'F')
		printf("C : %.2f\n", 5 * (f - 32) / 9);
	else if (key == 'C')
		printf("F : %.2f\n", 9 * f / 5 + 32);
	else
		printf("ERROR! Please Check Your Input!\n");
	getchar();
	return 0;
}