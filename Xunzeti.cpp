#include <stdio.h>
int main()
{
	int f = 0;
	char c;

	printf("\t��������ʽ 2x+3=4������ x �Ƕ��٣�\n\t\tA) 4\n\t\tB) 10\n\t\tC) 0.5\n\t\tD) 1.5\n\t\tE) 8\n");
	scanf("%c", &c);
	switch (c) {
	case 'C':f++; break;
	default:printf("\tC\n\n"); break;
	}
	getchar();

	printf("\t�¹����׶���������һ�����У�\n\n\t\tA) ����\n\t\tB) ��������\n\t\tC) Ī˹��\n\t\tD) ����\n");
	scanf("%c", &c);
	switch (c) {
	case 'D':f++; break;
	default:printf("\tD\n\n"); break;
	}
	getchar();

	printf("\t��������ѧ����2006��������̫��ϵֻ�а˴����ǣ�ڤ���ǲ��ٴ���̫��ϵ֮�С�\n\t\tA)��ȷ\n\t\tB)����\n\t\tC)������ȷ\n\t\tD)�޴��ж�\n");
	scanf("%c", &c);
	switch (c){
	case 'C':f++; break;
	default:printf("\tC\n\n"); break;
	}
	getchar();

	printf("\t����������ҹ������������ص����⣬�ڵ�һ�������У�����͸���������д��Ӫ��һ�����������磿\n\t\tA)��������\n\t\tB)��������\n\t\tC)��ˮ����\n\t\tD)׳������\n");
	scanf("%c", &c);
	switch (c) {
	case 'A':f++; break;
	default:printf("\tA\n\n"); break;
	}
	getchar();

	printf("��ķ���Ϊ�� %d ��\n", f);
	getchar();
	return 0;
}//ѡ������������ά���ٿ�(https://zh.wikipedia.org/)��ԭ����ʹ�� ֪ʶ���� ����-��ͬ��ʽ���� 3.0Э�� ��Ȩ