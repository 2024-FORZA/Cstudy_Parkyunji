//2738
#include <stdio.h>

int main() {
	int N, M;
	int A[100][100];
	int B[100][100];

	scanf("%d %d", &N, &M);

	// A��� �Է�
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &A[i][j]);
		}
	}
	// B��� �Է�
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &B[i][j]);
		}
	}
	// A��İ� B��� ���� �� ���
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			printf("%d ", A[i][j] + B[i][j]);
		}
		printf("\n");
	}

	return 0;
}