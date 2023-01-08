#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int res = 1;
	scanf("%d", &n);
	for (int i = n; i > 0; i--)
		res *= i;
	printf("%d", res);
	return 0;
}
///N! ±¸ÇÏ±â