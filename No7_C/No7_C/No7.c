#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char a[1000005];
	int count = 0;

	scanf("%[^\n]s", &a);

	if (a[0] != ' ') count++;

	for(int i = 1; i<strlen(a); i++)
		if (a[i - 1] == ' ' && a[i] != ' ')	count++;

	printf("%d", count);

	return 0;
}