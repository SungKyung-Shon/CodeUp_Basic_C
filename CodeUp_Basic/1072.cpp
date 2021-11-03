#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<stdio.h>
int main() {
	int n, m;
	scanf("%d", &n);
reget:
	if (n--!=0) {
		scanf("%d", &m);
		printf("%d\n", m);
		goto reget;
	}
	return 0;
}
#endif