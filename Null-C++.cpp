#include<stdio.h>
#include<wchar.h>
#include<locale.h>

wchar_t wc=0;
int main()
{
	setlocale(LC_ALL, "");//设置为本地区域
	while (wc<65535) {
		wprintf(L"%c==%d\n", wc, wc);
		wc++;
	}
}