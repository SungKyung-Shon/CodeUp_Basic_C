#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<stdio.h>
int main() {
	int n;
	int arr[10000] = { 0 };
	int min=24;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
		if (min > arr[i])
			min = arr[i];
	}
	printf("%d", min);
	return 0;
}
#endif