//2506
#include<stdio.h>

int main(void){
	int N;
	int check[100] = { 0, };
	int sum = 0, score = 0;   // 합계와 더할 점수 선언

	scanf("%d", &N);
	
	// 채점 결과 입력
	for (int i = 0; i < N; i++) {
		scanf("%d", &check[i]);
	}
	// 점수 계산
	for (int i = 0; i < N; i++) {
		if (check[i] == 0)
			score = 0;
		else if (check[i] == 1)
			score++;
		sum += score;
	}
	printf("%d\n", sum);

	return(0);
}