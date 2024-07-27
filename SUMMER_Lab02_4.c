//1065
#include<stdio.h>

int main()
{
	int N, num, A, B, C;
	scanf("%d", &N);

	if (N < 100) {
		printf("%d\n", N);
	}
	else {
		num = 99;

		for (int i = 100; i < N + 1; i++) {

			A = i / 100;
			B = (i - A * 100) / 10;
			C = i % 10;

			if ((C - B) == (B - A)) {
				num++;
			}
		}
		printf("%d\n", num);
	}

	return 0;
}