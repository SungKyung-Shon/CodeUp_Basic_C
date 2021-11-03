#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<stdio.h>
int main() {
	char c;
	while (1) {
		scanf("%c ", &c);
		if (c != 'q') {
			printf("%c\n", c);
		}
		else {
			printf("q");
			break;
		}
	}
	
	return 0;
}
#endif