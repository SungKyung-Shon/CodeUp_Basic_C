#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<stdio.h>
int main() {
    int n,x, y;
    int map[20][20] = {};
    for (int i = 1; i <= 19; i++) 
        for (int j = 1; j <= 19; j++)
            scanf("%d", &map[i][j]);

    scanf("%d", &n); 
    for (int i = 1; i <= n; i++){
        scanf("%d %d", &x, &y);
        for (int j = 1; j <= 19; j++)
        {
            if (map[x][j] == 1) map[x][j] = 0;
            else map[x][j] = 1;
        }
        for (int j = 1; j <= 19; j++)
        {
            if (map[j][y] == 1) map[j][y] = 0;
            else map[j][y] = 1;
        }
    }
    for (int i = 1; i <= 19 ; i++)
    {
        for (int j = 1; j <= 19; j++)
        {
            printf("%d ", map[i][j]);
        }
        printf("\n");
    }
	return 0;
}
#endif