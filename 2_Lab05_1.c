// 4592
#include<stdio.h>
int main() {
	while (1) {
		int N; // 0 < N <= 25
		scanf("%d", &N);
		if (N == 0)
			break;

		int num[25] = {0,};

		int x, j = 0, len = 0;
		for (int i = 0; i < N; i++) {
			scanf("%d", &x);
			if (j == 0) {
				num[j] = x;
				j++;
				len++;
			}
			else if (x != num[j - 1]) {
				num[j] = x;
				j++;
				len++;
			}
		}

		for (int i = 0; i < len; i++) {
			printf("%d ", num[i]);
		}
		printf("$\n");
	}
	return 0;
}