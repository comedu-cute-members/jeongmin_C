#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF) //Ctrl + Z�� �Է��ϸ� ����, ���������� ������ ��õ����� �ʱ� ������ ���
		//EOF(End Of File : ������ ���� �������� �� ��ȯ�ϴ� Ư���� �� -1 / ������ ���� ǥ���ϱ� ���� ��ũ�η� ���ǵ� ���)
		printf("%d\n", a + b);
	return 0;
}