//�����ַ����������Ϊ int ��
#include <stdio.h>
#define LONG 2048
void tongji(char *box, int *a, int *n, int *s, int *e)
{
	int i = 0;
	while (box[i] != '\0')
	{
		if (box[i] >= 'a'&&box[i] <= 'z' || box[i] >= 'A'&&box[i] <= 'Z')
			(*a)++;
		else if (box[i] >= '0'&&box[i] <= '9')
			(*n)++;
		else if (box[i] == ' ')
			(*s)++;
		else
			(*e)++;
		printf("i&e : %d\t%d\n", i, *e);
		i++;
	}
	printf("A = %5d\tN = %5d\tS = %5d\tE = %5d\tTotal = %d\n", *a, *n, *s, *e, *a + *n + *s + *e);	//����
}
int main()
{
	int i = -1;
	char box[LONG];
	int a, n, s, e;
	a = n = s = e = 0;
	do
	{
		i++;
		scanf("%c", &box[i]);
	} while (box[i] != '\n');
	box[i] = '\0';					//����� BUG!!!  i = '\0'�������أ���;
	int j = 0;
	for (; box[j] != '\0'; j++);
	printf("0 ��λ�� %d\n", j);
	tongji(box, &a, &n, &s, &e);
	printf("box��\n%s", box);
	getchar();
	return 0;
}