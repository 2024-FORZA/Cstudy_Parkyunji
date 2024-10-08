// 1934
#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		long long A, B, least = 0;
		scanf("%lld %lld", &A, &B);

		int a = 1, b = 1;
		if (A > B) {
			while (A * a != B * b) {
				if (A * a > B * b)
					b++;
				else
					a++;
			}
			least = A * a;
		}
		else if (B > A) {
			while (A * a != B * b) {
				if (B * b > A * a)
					a++;
				else
					b++;
			}
			least = A * a;
		}
		else
			least = A;
		printf("%lld\n", least);
	}
	return 0;
}