//2444
#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);   // N 입력 받음
	
	for (int i = 1; i <= 2 * N - 1; i++) {   // 1번째 줄부터 2*N-1 번째 줄까지 
		for (int j = 0; j < abs(N-i); j++) {   // 띄어쓰기 출력
			printf(" ");
		}
		for (int j = 0;j < 2 * N - 1 - 2 * abs(N-i); j++) {   // 별출력
			printf("*");
		}
		printf("\n");    // 한줄이 끝난 후 다음 줄로 이동
		}

	return 0;
}