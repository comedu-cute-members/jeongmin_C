#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, res = 0, ind = 1, count = 0;
	int rest = 0;
	int main = 666;
	int replace = 666;
	scanf("%d", &n);

	while (1) {

		if (n == 1)
		{
			printf("%d", main);
			break;
		}
		else {
			replace +=  1; // �ݺ������� ��� 1�� �����ϴ� ����
			main = replace; // ���ڸ� �ӽ� ������ �� main ����

			while (main > 0) {
				rest = main % 10; // �� ���ڸ����� �ľ�
				if (rest == 6) {
					count++;
					main /= 10; // �� ���� �ڸ��� �ľ��� ���� ������ 10 ����
				}
				else if (count < 3) { // 3ȸ ���� ������ �ʾ��� ��
					main /= 10;
					count = 0;
				}
				else if (count >= 3) { // 3ȸ ���� ������ ��
					main /= 10;
				}
			}

			if (count >= 3) // 3ȸ �̻� �������� 6�� ������ ���
				ind = ind + 1; // n��° ��ȭ ������ �ε����� ��Ī

			count = 0;

			if (ind == n) { // ��, n�� ind�� ���ٸ�
				printf("%d", replace); // ���� ��� �� ����
				break;
			}
		}

	}

	return 0;
}