//空格隔开的英文数组，将首字母转换为大写
#include <stdio.h>
#define LONG 30				//最大单词词长
int main()
{
	char box[LONG];
	int i;
	while (1)
	{
		for (i = 0; i < LONG; i++)
		{
			scanf("%c", &box[i]);
			if (box[i] == '\n')
				printf("\n");
			if (box[i] == ' ')
			{
				i = 0;
				printf(" ");
				break;
			}
			if (i == 0 && box[0] > 96)
				box[0] = box[0] - 32;
			printf("%c", box[i]);
		}
	}
	getchar();
	return 0;
}


That offered Mr. Trump a face-saving way out of the imbroglio, and a chance to de-escalate. But the messages he posted on Twitter late Sunday stepped up the pressure on China’s leaders instead.
That Offered Mr. Trump A Face-saving Way Out Of The Imbroglio, And A Chance To De-escalate. But The Messages He Posted On Twitter Late Sunday Stepped Up The Pressure On China’s Leaders Instead.

//空格隔开的英文数组，将首字母转换为大写
#include <stdio.h>
#define LONG 30				//最大单词词长
int main()
{
	char box[LONG];
	int i;
	while (1)
	{
		for (i = 0; i < LONG; i++)
		{
			scanf("%c", &box[i]);
			if (box[i] == ' ')
			{
				i = 0;
				printf(" ");
				break;
			}
			if (i == 0 && box[0] > 96)
				box[0] = box[0] - 32;
			printf("|%d|", box[i]);
		}
	}
	getchar();
	return 0;
}

That offered Mr. Trump a face-saving way out of the imbroglio, and a chance to de-escalate. But the messages he posted on Twitter late Sunday stepped up the pressure on China’s leaders instead.
|84||104||97||116| |79||102||102||101||114||101||100| |77||114||46| |84||114||117||109||112| |65| |70||97||99||101||45||115||97||118||105||110||103| |87||97||121| |79||117||116| |79||102| |84||104||101| |73||109||98||114||111||103||108||105||111||44| |65||110||100| |65| |67||104||97||110||99||101| |84||111| |68||101||45||101||115||99||97||108||97||116||101||46| |66||117||116| |84||104||101| |77||101||115||115||97||103||101||115| |72||101| |80||111||115||116||101||100| |79||110| |84||119||105||116||116||101||114| |76||97||116||101| |83||117||110||100||97||121| |83||116||101||112||112||101||100| |85||112| |84||104||101| |80||114||101||115||115||117||114||101| |79||110| |67||104||105||110||97||-95||-81||115| |76||101||97||100||101||114||115| |73||110||115||116||101||97||100||46||10|


//空格隔开的英文数组，将首字母转换为大写
#include <stdio.h>
#define LONG 30				//最大单词词长
int main()
{
	char box[LONG];
	int i;
	while (1)
	{
		for (i = 0; i < LONG; i++)
		{
			scanf("%c", &box[i]);
			if (box[i] == ' ')
			{
				i = 0;
				printf(" ");
				break;
			}
			if (i == 0 && box[0] > 96)
				box[0] = box[0] - 32;
			if (box[i] == EOF)
				printf("\n");
			printf("%c", box[i]);
		}
	}
	getchar();
	return 0;
}

That offered Mr. Trump a face-saving way out of the imbroglio, and a chance to de-escalate. But the messages he posted on Twitter late Sunday stepped up the pressure on China’s leaders instead.
That
Offered
Mr.
Trump
A
Face-saving
Way
Out
Of
The
Imbroglio,
And
A
Chance
To
De-escalate.
But
The
Messages
He
Posted
On
Twitter
Late
Sunday
Stepped
Up
The
Pressure
On
China’s
Leaders
Instead.