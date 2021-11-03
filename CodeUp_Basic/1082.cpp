#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<stdio.h>
int main() {
	int n;
	scanf("%X", &n);
	for (int i = 1; i <= 15; i++)
	{
		printf("%X*%X=%X\n", n, i,n * i);
	}
	return 0;
}
#endif