// 2858
#include<stdio.h>

int main() {
	int R, B;  // �����ڸ��� ����, �������� ����.
	long long size;   // ����
	int L[100] = { 0, }, W[100] = {0,};
	
	scanf("%d %d", &R, &B);
	size = R + B;

	// L�� W�� �� �ĺ� ã��
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

	// B�� ���� �̿��ؼ� L�� W�� �� ã��
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