#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<stdio.h>
int main() {
    int k, c = 0;
    int r, g, b;
    scanf("%d%d%d", &r, &g, &b);
        for (int i = 0; i < r; i++)
            for (int j = 0; j < g; j++)
                for (k = 0; k < b; k++)
                {
                    printf("%d %d %d\n", i, j, k);
                    c++;
                }

    printf("%d ", c);
	return 0;
}
#endif