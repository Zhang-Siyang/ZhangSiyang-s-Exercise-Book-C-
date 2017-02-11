#include <stdio.h>
int main()
{
	double maxin(double *box, int x, int y, int s_witch, int *maxinx, int *maxiny);
	int maxinx,maxiny;
	double maxin_n,box[5][8] = { 77,51,52,66,27,78,51,31,80,82,58,25,76,23,81,66,12,61,62,45,83,60,92,14,49,32,81,69,99,50,37,30,43,79,95,75,78,64,78,66 };
	maxin_n = maxin(&box[0][0], 5, 8, -1, &maxinx, &maxiny);
	printf("%f\t%d\t%d\n", maxin_n, ++maxinx, ++maxiny);
	getchar();
	return 0;
}

double maxin(double *box, int x, int y, int s_witch, int *r_maxin_x, int *r_maxin_y)		//*box === &box[0][0];x ,y 为所求矩阵之大小；s_witch=1 OR -1(对应MAX MIN）；maxinx,maxiny存储maxin位置；
{
	if (x < 1 || y < 1 || s_witch != -1 && s_witch != 1)
	{
		printf("Error! x = %d,y = %d, s_witch = %d", x, y, s_witch);
		return -1;
	}
	else
	{
		double maxin = *box;
		int i, j, maxin_x = 0, maxin_y = 0;
		if (s_witch == 1)
		{
			for (i = 0; i < x; i++)
			{
				for (j = 0; j < y; j++)
				{
					if (*(box + i*y + j) > maxin)
					{
						maxin = *(box + i*y + j);
						maxin_x = i;
						maxin_y = j;
					}
				}
			}
		}
		else
		{
			for (i = 0; i < x; i++)
			{
				for (j = 0; j < y; j++)
				{
					if (*(box + i*y + j) < maxin)
					{
						maxin = *(box + i*y + j);
						maxin_x = i;
						maxin_y = j;
					}
				}
			}
		}
		*r_maxin_x = maxin_x;
		*r_maxin_y = maxin_y;
		return maxin;
	}
}