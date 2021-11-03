#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if (i % 3 == 0 || i % 6 == 0 || i % 9 == 0)
			printf("X ");
		else
			printf("%d ", i);
	}
	return 0;
}
#endif