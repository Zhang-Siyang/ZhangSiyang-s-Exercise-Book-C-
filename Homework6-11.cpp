//Homework6-11__ˮ�ɻ���
#include <stdio.h>
#define LOW 100
#define HIGH 999
int main()
{
	int g, s, b;
	for (int i = 100; i <= HIGH; i++)
	{
		g = i % 10;
		s = (i / 10) % 10;
		b = i / 100;
		if (i == g*g*g + s*s*s + b*b*b)
			printf("%d Is A ShuiXianHuaShu.[%d = %d^3 + %d^3 + %d^3]\n", i, i, b, s, g);
		//printf("------    %d    %d    %d    %d\n", i, b, s, g);
	}
	return 0;
}
/*
����������Լ�����ʧ��ԭ��;
ȡ��λʱ���ִ���
{
	s = (i / 10) % 10;					//��ȷ
	s = i / 10;							//����
}
*/