#include <stdio.h>
int main()
{
	double num[4], t;
	int i, j;

	//��ʼ¼������

	printf("Please Enter Four Number:");
	for (i = 0; i < 4; i++)
		scanf_s("%lf", &num[i]);

	//��ʼ�����Ƚϣ���������

	for (i = 0; i < 4; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (num[i] < num[j])
			{											//Son Of Bitch, Zhen TM Nan Xie!!!
				t = num[i];
				num[i] = num[j];
				num[j] = t;
			}
		}
	}

	//��ʼ���

	for (i = 0; i < 4; i++)
	{
		printf("\n%f\n", num[i]);
	}
	printf("\n");

	//��������������°�

	return 0;
}