#include <stdio.h>
#include <stdlib.h>
#define N 1e-6
int main()
{
	double a, b, l, r, x, c;

	printf("����������һԪһ�η��̡��뽫��Ҫ���ķ��̻�Ϊ Y=AX+B ��ʽ,��������ַ����Ҷ˵㡣\n");
	printf("�Կո��������س�������");
	scanf("%lf%lflflf", &a, &b, &l, &r);

	if ((a*l + b)*(a*r + b) > 0)
	{
		printf("�˵�ֵ������󣬳��򼴽�����.");
		getchar();
		abort();
	}
	if (a*l > 0)
	{
		x = l;
		l = r;
		r = x;
	}
	do
	{
		
	}
}