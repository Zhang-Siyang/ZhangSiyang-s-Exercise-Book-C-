#include <stdio.h>
#define N 100							//���������Ƚ� 10 ����
int main()
{
	int box[N], i, j, t;				//iΪ��ʹ�����飬jΪ�˱Ƚ� { �����Ƚϵ� ��һ���� }
	for (i = 0; i<N; i++)
		scanf_s("%d", &box[i]);			//������û����� ȡ��ַ ����
	for (i = 0; i<N; i++)
	{
		for (j = i; j<N; j++)
		{
			if (box[i]<box[j])
			{							//�������Ƚ��߼�����j �� i ����
				t = box[i];
				box[i] = box[j];
				box[j] = t;
			}
		}
	}
	for (i = 0; i<N; i++)
	{
		printf("%d\t", box[i]);
		if ((i - 1) % 4 == 0)
			printf("\n");
	}
	return 0;
}