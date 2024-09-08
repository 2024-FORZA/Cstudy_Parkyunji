//2738
#include <stdio.h>

int main() {
	int N, M;
	int A[100][100];
	int B[100][100];

	scanf("%d %d", &N, &M);

	// A행렬 입력
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &A[i][j]);
		}
	}
	// B행렬 입력
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &B[i][j]);
		}
	}
	// A행렬과 B행렬 더한 것 출력
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			printf("%d ", A[i][j] + B[i][j]);
		}
		printf("\n");
	}

	return 0;
}