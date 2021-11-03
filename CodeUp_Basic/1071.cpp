#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<stdio.h>
int main() {
	int n;
reload:
	scanf("%d", &n);
	if (n != 0){
		printf("%d\n", n);
		goto reload;
}
	return 0;
}
#endif