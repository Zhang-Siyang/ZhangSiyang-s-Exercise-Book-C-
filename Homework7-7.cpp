#include <stdio.h>
int main()
{
	void nixu(char *box);
	char box[] = "abcdefghijklmnopqrstuvwxyz";		//不会字符串数组【指针】的初始化
	nixu(box);
	printf("%s\n", box);
	getchar();
	return 0;
}
void nixu(char *box)		//忘了打nixu
{
	int i = 0;
	for (; *(box + i) != '\0'; i++);
	int n = 0;
	char swap;
	for (int theend = i / 2; n < theend; n++)
	{
		swap = *(box + n);
		*(box + n) = *(box + i - n - 1);			//正确：(box + i - n - 1)，错误：(box + i - n)
		*(box + i - n - 1) = swap;
	}
	printf("%s\n", box);
}