// 2896
#include<stdio.h>

int main() {
	double A, B, C, I, J, K;   // 주스의 양과 비율
	double a, b, c;  // 주스를 비율로 나눈 수 (칵테일을 최대로 만들 수 있는 양)

	scanf("%lf %lf %lf", &A, &B, &C);
	scanf("%lf %lf %lf", &I, &J, &K);
	a = A / I;
	b = B / J;
	c = C / K;
	
	if (a >= b) {
		if (b >= c) { // a > b > c
			printf("%.4lf %.4lf 0\n", A - I * c, B - J * c);
		}
		else {  // a > c > b
			printf("%.4lf 0 %.4lf\n", A - I * b, C - K * b);
		}
	}
	else {   // b > a > c
		if (a >= c) {
			printf("%.4lf %.4lf 0\n", A - I * c, B - J * c);
		}
		else {  // b > c > a
			printf("0 %.4lf %.4lf \n", B - J * a, C - K * a);
		}
	}

	return 0;
}