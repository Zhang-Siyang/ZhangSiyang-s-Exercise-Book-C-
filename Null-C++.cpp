#include<stdio.h>
#include<wchar.h>
#include<locale.h>

wchar_t wc=0;
int main()
{
	setlocale(LC_ALL, "");//����Ϊ��������
	while (wc<65535) {
		wprintf(L"%c==%d\n", wc, wc);
		wc++;
	}
}