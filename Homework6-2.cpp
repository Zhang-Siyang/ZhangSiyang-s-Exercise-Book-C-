#include <stdio.h>		//Homework6-2,�������в���һ��������ʹ���������Ȼ���������������в���һ��������ʹ���������Ȼ��������
#define N 10
int main()
{
	int i, j;
	double a[N],t;
	for (i = 0; i<N - 1; i++)
		a[i] = (i + 1);
	printf("Please Enter Your Number:");
	scanf("%lf", &t);
	//��ʼ����
	for (i = 0, j = N - 1; i<N - 1; i++)
	{
		if (a[i] < t)
			;
		else
			break;
	}
	j = i;
	for (i = N - 1; i>j; i--)
		a[i] = a[i - 1];			//֮ǰ��a[i-1]=a[i],����
	a[j] = t;
	//�������
	for (i = 0; i<N; i++)
		printf("a[%d]=%f\n", i, a[i]);
	getchar();
	return 0;
}