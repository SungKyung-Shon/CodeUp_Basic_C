#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<stdio.h>
int main() {
	int h, w,n,l,d,x,y;
	int map[100][100];
	scanf("%d%d%d", &h, &w,&n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d%d%d", &l, &d, &x, &y);
		if (d == 0) // row
		{
			for (int j = y; j < y+l; j++)
				map[x][j] = 1;
		}
		else {
			for (int j = x; j < x + l; j++)
				map[j][y] = 1;
		}
	}
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= w; j++)
		{
			printf("%d ", map[i][j]);
		}
		printf("\n");
	}
	return 0;
}
#endif