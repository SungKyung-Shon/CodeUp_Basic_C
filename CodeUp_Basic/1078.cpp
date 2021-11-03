#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<stdio.h>
int main() {
	int n, sum=0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0) sum += i;
	}
	printf("%d", sum);
	return 0;
}
#endif