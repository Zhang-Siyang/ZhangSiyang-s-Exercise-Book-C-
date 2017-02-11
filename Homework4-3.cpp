#include <stdio.h>
int main()
{
	double a, b, c, d, s;
	scanf("%Lf%Lf%Lf%Lf", &a, &b, &c, &d);
	if (a > b);
	else {
		s = a;
		a = b;
		b = s;
	}
	if (a > c);
	else {
		s = a;
		a = c;
		s = s;
	}
	if (a > d);
	else {
		s = a;
		a = d;
		b = s;
	}																		//A Over

	if (b > c);
	else {
		s = b;
		b = c;
		c = s;
	}
	if (b > d);
	else {
		s = b;
		b = d;
		d = s;
	}																		//B Over

	if (c > d);
	else {
		s = c;
		c = d;
		d = s;
	}																		//C Over
	printf("%f\n%f\n%f\n%f\n", a, b, c, d);
	return 0;
}																			//MD,ĞÄºÃÀÛ