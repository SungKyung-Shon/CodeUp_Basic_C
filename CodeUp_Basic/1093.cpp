#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<stdio.h>
int main() {
	int n,t;
	int arr[24] = {};
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&t);
		arr[t] += 1;
	}
	for (int i = 1; i < 24; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
#endif