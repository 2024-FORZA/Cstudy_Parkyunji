//1418
#include<stdio.h>

int main() {
    int N, K, cnt = 0;
    scanf("%d", &N);
    scanf("%d", &K);

    for (int i = 2; i <= N; i++) {
        int num = i;
        for (int j = 2; j <= K; j++) {  // i�� 2 ~ K������ ���� ������
            while (num % j == 0) {
                num = num / j;
            }
        }
        if (num == 1)
            cnt++;
    }
    // ���� 1�� k-���ؼ��� ���Ե��� ������ �������� �����ϰ� ����.
    printf("%d\n", cnt+1);

    return 0;
}