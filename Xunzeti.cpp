#include <stdio.h>
int main()
{
	int f = 0;
	char c;

	printf("\t给定方程式 2x+3=4，请问 x 是多少？\n\t\tA) 4\n\t\tB) 10\n\t\tC) 0.5\n\t\tD) 1.5\n\t\tE) 8\n");
	scanf("%c", &c);
	switch (c) {
	case 'C':f++; break;
	default:printf("\tC\n\n"); break;
	}
	getchar();

	printf("\t德国的首都是下列哪一个城市？\n\n\t\tA) 孟买\n\t\tB) 乌兰巴托\n\t\tC) 莫斯科\n\t\tD) 柏林\n");
	scanf("%c", &c);
	switch (c) {
	case 'D':f++; break;
	default:printf("\tD\n\n"); break;
	}
	getchar();

	printf("\t国际天文学会于2006年宣布：太阳系只有八大行星；冥王星不再存于太阳系之中。\n\t\tA)正确\n\t\tB)错误\n\t\tC)部分正确\n\t\tD)无从判断\n");
	scanf("%c", &c);
	switch (c){
	case 'C':f++; break;
	default:printf("\tC\n\n"); break;
	}
	getchar();

	printf("\t《春江花月夜》包含三个相关的主题，在第一个主题中，作者透过景物的描写，营造一个怎样的世界？\n\t\tA)清朗亮丽\n\t\tB)幽深凄冷\n\t\tC)烦水迷离\n\t\tD)壮阔瑰奇\n");
	scanf("%c", &c);
	switch (c) {
	case 'A':f++; break;
	default:printf("\tA\n\n"); break;
	}
	getchar();

	printf("你的分数为： %d 分\n", f);
	getchar();
	return 0;
}//选择题内容来自维基百科(https://zh.wikipedia.org/)，原内容使用 知识共享 署名-相同方式共享 3.0协议 授权