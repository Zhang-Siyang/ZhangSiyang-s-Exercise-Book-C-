#include <stdio.h>						//��������������ӦԪ�أ������
#define M 3			//����
#define N 5			//�п�
int main()
{
	int a[M][N], b[M][N], sum[M][N];
	//���� ����A
	printf("Please Enter A Shuzu:\n");
	for (int i = 0; i < M; i++)
	{
		printf("Now, Please Enter No.%d Line.[At A]\n",i+1);
		for (int j = 0; j < N; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("\n");
	//���� ����B
	printf("Please Enter B Shuzu:\n");
	for (int i = 0; i < M; i++)
	{
		printf("Now, Please Enter No.%d Line.[At B]\n", i + 1);
		for (int j = 0; j < N; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	printf("\n");
	//�Ӻ�
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("\n");
	//��� ����SUM
	printf("Sum:\n");
	for (int i = 0; i < M; i++)
	{
		printf("Line %2d :\t", i + 1);
		for (int j = 0; j < N; j++)
		{
			printf("%-4d\t", sum[i][j]);
		}
		printf("\n");
	}
	getchar();
	return 0;
}