//2562
#include <stdio.h>

int main() {
	int max = 0, seq;

	for (int i = 1; i <= 9; i++) {  // 9번째 줄까지 수를 입력 받음
		int num;
		scanf("%d", &num);

		if (num > max) {   // 입력받은 값과 그전까지의 최댓값을 비교
			max = num;
			seq = i;     // 입력받은 값이 최댓값이 됐을 때 순서를 저장
		}
	}
	printf("%d\n%d", max, seq);
	return 0;
}