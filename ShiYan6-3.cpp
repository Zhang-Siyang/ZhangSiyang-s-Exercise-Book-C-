#include <stdio.h>														//ɸѡ������ֵ�������
#define N 10															// ����ֵ �ĸ���
int main()
{
	int i;																//����
	double box[N], min, max;											//BOX & ����
																		// ����
	printf("Please Input %d Number\n", N);
	for (i = 0; i < N; i++)
	{
		scanf("%lf", &box[i]);
	}
	//�Ƚ�
	for (i = 0, max = min = box[0]; i < N; i++)
	{
		if (box[i] < min)
			min = box[i];
		if (box[i] > max)
			max = box[i];
	}
	//���
	printf("The Min = %f , The Max = %f\n", min, max);		//�������ǻ���
	return 0;
}