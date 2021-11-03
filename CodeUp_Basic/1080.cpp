#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<stdio.h>
int main() {
	int i,n,sum=0;
	scanf("%d", &n);
	for (i = 1; i < n; i++)
	{
		sum += i;
		if (sum >= n)
			break;
	}
	printf("%d", i);
	return 0;
}
#endif