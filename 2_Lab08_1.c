//15719
#include<stdio.h>

int main() {
    int N, M, num, sum = 0, findM = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &num);    // 1 ~ N-1까지의 정수들을 입력 받음
        sum += num;          // 입력 받은 정수들을 모두 더함 
    }

    for (int i = 1; i <= N-1; i++) {
        findM += i;      // 1~N-1까지의 수를 하나씩 더함
    }

    M = sum - findM;      // 중복된 수 찾음
    printf("%d", M);

    return 0;
}