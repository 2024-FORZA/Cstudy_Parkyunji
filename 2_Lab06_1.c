//2506
#include<stdio.h>

int main(void){
	int N;
	int check[100] = { 0, };
	int sum = 0, score = 0;   // �հ�� ���� ���� ����

	scanf("%d", &N);
	
	// ä�� ��� �Է�
	for (int i = 0; i < N; i++) {
		scanf("%d", &check[i]);
	}
	// ���� ���
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