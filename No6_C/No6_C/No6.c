#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main()
{
    int a[31] = { 0 };
    int n;
    for (int i = 0; i < 28; i++) {
        scanf("%d", &n);
        a[n] = n;
    }

    for (int i = 1; i < 31; i++) {
        if (a[i] == 0)
            printf("%d\n", i);
    }
    return 0;
}