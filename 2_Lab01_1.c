//2444
#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);   // N �Է� ����
	
	for (int i = 1; i <= 2 * N - 1; i++) {   // 1��° �ٺ��� 2*N-1 ��° �ٱ��� 
		for (int j = 0; j < abs(N-i); j++) {   // ���� ���
			printf(" ");
		}
		for (int j = 0;j < 2 * N - 1 - 2 * abs(N-i); j++) {   // �����
			printf("*");
		}
		printf("\n");    // ������ ���� �� ���� �ٷ� �̵�
		}

	return 0;
}