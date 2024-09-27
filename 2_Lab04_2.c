// 2693
#include<stdio.h>

int main()
{
	const int N = 3;
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		int A[10] = { 0, };
		for (int j = 0; j < 10; j++) {
			scanf("%d", &A[j]);
		}

		// 내림차순으로 정리
		int x;
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				if (A[j] > A[k]) {
					x = A[j];
					A[j] = A[k];
					A[k] = x;
				}
			}
		}

		printf("%d\n", A[N - 1]);
	}

	return 0;
}