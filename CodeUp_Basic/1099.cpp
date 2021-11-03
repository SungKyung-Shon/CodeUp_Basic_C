#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<stdio.h>
int main() {
	int x = 2, y = 2;
	int map[12][12];
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			scanf("%d", &map[i][j]);
		}
	}

	while (1) {
		if (map[x][y] == 0) {
			map[x][y] = 9;
			y+=1;
		}
		if (map[x][y] == 1) {
			y-=1;
			x+=1;
		}
		if (map[x][y] == 2) {
			map[x][y] = 9;
			break;
		}
		else if (map[x][y+1] == 1 && map[x + 1][y] == 1) {
			if (map[x][y] == 0) {
				map[x][y] = 9;
			}
			break;			
		}
	}

	for (int i = 1; i <= 10; i++,puts(" "))
	{
		for (int j = 1; j <=10; j++)
		{
			printf("%d ", map[i][j]);
		}
	}
	return 0;
}
#endif