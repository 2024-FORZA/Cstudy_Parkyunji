//2669
#include <stdio.h>

int main() {
    int S[100][100] = { 0, };
    int sum = 0;

    for (int i = 0; i < 4; i++) {
        int lx, ly, rx, ry;
        scanf("%d %d %d %d", &lx, &ly, &rx, &ry);

        for (int j = lx; j < rx; j++) {
            for (int k = ly; k < ry; k++) {
                S[j][k] = 1;
            }
        }
    }

    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            sum += S[i][j];
        }
    }

    printf("%d\n", sum);

    return 0;
}