//15719
#include<stdio.h>

int main() {
    int N, M, num, sum = 0, findM = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &num);    // 1 ~ N-1������ �������� �Է� ����
        sum += num;          // �Է� ���� �������� ��� ���� 
    }

    for (int i = 1; i <= N-1; i++) {
        findM += i;      // 1~N-1������ ���� �ϳ��� ����
    }

    M = sum - findM;      // �ߺ��� �� ã��
    printf("%d", M);

    return 0;
}