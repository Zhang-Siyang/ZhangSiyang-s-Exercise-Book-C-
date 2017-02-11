#include <stdio.h>
int main()
{
	char a;
	int b;
	short s;
	long c;
	float d;
	double e;
	long double f;
	printf("	    char:%d\t%d\n", sizeof(char), sizeof(a));
	printf("	     int:%d\t%d\n", sizeof(int), sizeof(b));
	printf("	   short:%d\t%d\n", sizeof(short), sizeof(s));
	printf("	    long:%d\t%d\n", sizeof(long), sizeof(c));
	printf("	   float:%d\t%d\n", sizeof(float), sizeof(d));
	printf(" 	  double:%d\t%d\n", sizeof(double), sizeof(e));
	printf(" long double:%d\t%d\n", sizeof(long double), sizeof(f));
	getchar();
	return 0;
}