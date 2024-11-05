//1978
#include<stdio.h>
#include<stdio.h>

int main(void){
	int N, num, count = 0; // count : 소수의 개수
		scanf("%d", &N);

	for (int i = 0; i < N; i++) { // N개의 수 입력 받음
		scanf("%d", &num);
		int cnt = 0;  // 약수의 개수
		for (int j = 1; j <= num; j++) { // 약수의 개수를 구하는 for문
			if (num % j == 0)
				cnt++;
		}
		if (cnt == 2)  // 약수의 개수가 2개이면 소수
			count++;
	}

	printf("%d", count);

	return(0);
}