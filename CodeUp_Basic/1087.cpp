#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<stdio.h>
int main() {
	int n,s = 0;
	scanf("%d", &n);
	for (int i = 1; ; i++)
	{
		s += i;
		if (s >= n)
			break;
	}
	printf("%d", s);
	return 0;
}
#endif