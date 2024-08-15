//11653
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    if (N == 1) {
        return 0;
    }

    int i = 2;
    while (i <= N) {
        if ((N % i) == 0) {
            N = N / i;
            printf("%d\n", i);
        }
        else {
            i++;
        }
    }

    return 0;
}