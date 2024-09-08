//2445
#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);

	//À­ºÎºÐ
	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		for (int j = 0; j < 2 * N - 2 * i; j++) {
			printf(" ");
		}
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
	//¾Æ·§ºÎºÐ
	for (int i = 1; i <= N - 1; i++) {
		for (int j = 0; j < N - i; j++) {
			printf("*");
		}
		for (int j = 0; j < i * 2; j++) {
			printf(" ");
		}
		for (int j = 0; j < N - i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}