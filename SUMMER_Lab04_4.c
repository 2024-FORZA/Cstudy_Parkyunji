//1453
#include <stdio.h>

int main() {
    int seat[101] = { 0, };
    int num, count = 0;

    int N;
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        if (seat[num] == 0) {
            seat[num] = 1;
        }
        else {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}