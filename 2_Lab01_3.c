//2562
#include <stdio.h>

int main() {
	int max = 0, seq;

	for (int i = 1; i <= 9; i++) {  // 9��° �ٱ��� ���� �Է� ����
		int num;
		scanf("%d", &num);

		if (num > max) {   // �Է¹��� ���� ���������� �ִ��� ��
			max = num;
			seq = i;     // �Է¹��� ���� �ִ��� ���� �� ������ ����
		}
	}
	printf("%d\n%d", max, seq);
	return 0;
}