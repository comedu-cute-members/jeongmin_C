#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int paper[100][100] = { 0, };
    int n, r, h;
    int count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &r, &h);
        for (int m = 100 - (h + 10); m < 100 - h; m++) {
                for (int k = r; k < r + 10; k++) {
                    paper[m][k] = 1;
                }
        }
    }
    for (int i = 0; i < 100; i++) {
            for (int j = 0; j < 100; j++) {
                if (paper[i][j] == 1)
                    count++;
            }
    }
    printf("%d", count);
    return 0;
}