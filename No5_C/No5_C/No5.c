#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF) //Ctrl + Z를 입력하면 종료, 종료조건의 조건이 명시돼있지 않기 때문에 사용
		//EOF(End Of File : 파일의 끝에 도달했을 때 반환하는 특별한 값 -1 / 파일의 끝을 표현하기 위해 매크로로 정의된 상수)
		printf("%d\n", a + b);
	return 0;
}