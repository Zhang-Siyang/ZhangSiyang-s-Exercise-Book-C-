#include <stdio.h>
#define N 500
int main()
{
	long long f[N] = { 1,1 };
	int i;
	for (i = 2; i<N; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
	}
	i = 0;
	while (i<N)
	{
		printf("%-20lld\t", f[i]);			//��ס��long long ���ʱʹ�� %lld
		i++;
		if (!(i % 4))						//�Ѿ� +1 �ˣ�ֱ��Ĥ 4 �ж��Ƿ���
			printf("\n");
	}
	printf("\n");
	return 0;
}