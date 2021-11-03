#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<stdio.h>
int main() {
	long long h, b, c, s;
	double k;
	scanf("%lld %lld %lld %lld", &h, &b, &s, &c);
	k = h * b * s * c;
	printf("%.1lf MB", k / 8 / 1024 / 1024);
	return 0;
}
#endif