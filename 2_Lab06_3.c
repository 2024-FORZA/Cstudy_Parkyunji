//1978
#include<stdio.h>
#include<stdio.h>

int main(void){
	int N, num, count = 0; // count : �Ҽ��� ����
		scanf("%d", &N);

	for (int i = 0; i < N; i++) { // N���� �� �Է� ����
		scanf("%d", &num);
		int cnt = 0;  // ����� ����
		for (int j = 1; j <= num; j++) { // ����� ������ ���ϴ� for��
			if (num % j == 0)
				cnt++;
		}
		if (cnt == 2)  // ����� ������ 2���̸� �Ҽ�
			count++;
	}

	printf("%d", count);

	return(0);
}