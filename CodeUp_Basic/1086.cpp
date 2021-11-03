#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<stdio.h>
int main() {
	long long w, h, b;
	scanf("%lld %lld %lld", &w, &h, &b);
	double k;
	k = w * h * b;
	printf("%.2lf MB", k / 8 / 1024 / 1024);
	return 0;
}
#endif