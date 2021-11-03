#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<stdio.h>
int main() {
	long long int a, r, n;
	scanf("%ld %ld %ld", &a, &r, &n);
	for (int i = 1; i <= n-1; i++)
	{
		a *= r;
	}
	printf("%lld\n", a);
	return 0;
}
#endif