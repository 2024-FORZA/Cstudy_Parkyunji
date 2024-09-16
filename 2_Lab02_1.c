//2010
#include <stdio.h>

int main() {
	int N,sum = 0;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		int plug;
		scanf("%d", &plug);

		if (i == N - 1) {
			sum += plug;
		}
		else {
			sum += plug - 1;
		}
	}
	printf("%d\n", sum);

	return 0;
}