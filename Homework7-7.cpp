#include <stdio.h>
int main()
{
	void nixu(char *box);
	char box[] = "abcdefghijklmnopqrstuvwxyz";		//�����ַ������顾ָ�롿�ĳ�ʼ��
	nixu(box);
	printf("%s\n", box);
	getchar();
	return 0;
}
void nixu(char *box)		//���˴�nixu
{
	int i = 0;
	for (; *(box + i) != '\0'; i++);
	int n = 0;
	char swap;
	for (int theend = i / 2; n < theend; n++)
	{
		swap = *(box + n);
		*(box + n) = *(box + i - n - 1);			//��ȷ��(box + i - n - 1)������(box + i - n)
		*(box + i - n - 1) = swap;
	}
	printf("%s\n", box);
}