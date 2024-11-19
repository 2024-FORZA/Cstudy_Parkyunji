//1418
#include<stdio.h>

int main() {
    int N, K, cnt = 0;
    scanf("%d", &N);
    scanf("%d", &K);

    for (int i = 2; i <= N; i++) {
        int num = i;
        for (int j = 2; j <= K; j++) {  // i를 2 ~ K까지의 수로 나눠줌
            while (num % j == 0) {
                num = num / j;
            }
        }
        if (num == 1)
            cnt++;
    }
    // 원래 1은 k-세준수에 포함되지 않지만 예제에선 포함하고 있음.
    printf("%d\n", cnt+1);

    return 0;
}