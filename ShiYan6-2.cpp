#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c, sanjiao;

	printf("����������һԪһ�η��� �� һԪ���η��̡��뽫��Ҫ���ķ��̻�Ϊ Y=AX^2+BX+C ��ʽ��\n");
	printf("���������� A B C ���Կո���:");

	scanf("%lf%lf%lf", &a, &b, &c);
	printf("\n");
	if (a == 0)
	{
		if (c == 0)
			printf("������ֻ��һ����: X = 0\n");
		else
		{
			printf("������ֻ��һ����:X=%f\n", -(b / c));
		}
	}

	else
	{
		sanjiao = b*b - 4 * a*c;
		if (sanjiao < 0)
			printf("�÷����޽�\n");
		else if (sanjiao == 0)
		{
			printf("������ֻ��һ����:X=%f\n", -(b / 2 * a));
		}
		else
		{
			printf("�������������� : X = %f , X = %f\n", -(b + sqrt(sanjiao) / 2 * a), -(b - sqrt(sanjiao) / 2 * a));
		}
	}
	getchar();
	return 0;
}