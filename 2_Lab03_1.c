//3040
#include <stdio.h>

int main() {
	int hat[9], sum = 0, a, b;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &hat[i]);
		sum += hat[i];
	}
	sum -= 100;   // �ϰ������̰� �ƴ� �� �������� ������ �� ��

	for (int i = 0; i < 9; i++) {   // �ϰ� �����̰� �ƴ� �� ������ ���ϱ�
		for (int j = 0; j < 9; j++) {
			if ((i != j) && (hat[i] + hat[j] == sum)) {
				a = i;
				b = j;
				break;
			}
		}
	}

	for (int i = 0; i < 9; i++) {  // �ϰ� ������ ������ �� ���
		if ((i != a) && (i != b)) {
			printf("%d\n", hat[i]);
		}
	}

	return 0;
}