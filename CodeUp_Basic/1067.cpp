#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	if (n > 0) {
		printf("plus\n");
		if (n % 2 == 0) {
			printf("even\n");
		}
		else {
			printf("odd\n");
		}
	}
	else {
		printf("minus\n");
		if (n % 2 == 0) {
			printf("even\n");
		}
		else {
			printf("odd\n");
		}
	}

	return 0;
}
#endif