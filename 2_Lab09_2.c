// 2858
#include<stdio.h>

int main() {
	int R, B;  // 가장자리는 빨강, 나머지는 갈색.
	long long size;   // 면적
	int L[100] = { 0, }, W[100] = {0,};
	
	scanf("%d %d", &R, &B);
	size = R + B;

	// L과 W의 값 후보 찾기
	int i = 3, j = 0;;
	while (size / i >= i){
		for (i; i <= size / 3; i++) {
			if (size % i == 0) {
				L[j] = size / i;
				W[j] = i;
				j++;
			}
		}
	}

	// B의 값을 이용해서 L과 W의 값 찾기
	int a = 0;
	while (W[a] != 0) {
		if ((L[a] - 2) * (W[a] - 2) == B) {
			printf("%d %d\n", L[a], W[a]);
			break;
		}
		a++;
	}
	
	return 0;
}