//9076
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int scores[5] = { 0, };
        
        // 점수 5개 입력 받음
        for (int j = 0; j < 5; j++) {
            scanf("%d", &scores[j]);
        }

        // 5개의 점수 오름차순 정리
        int x;
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 5; k++) {
                if (scores[j] < scores[k]) {
                    x = scores[j];
                    scores[j] = scores[k];
                    scores[k] = x;
                }
            }
        }

        if (scores[3] - scores[1] >= 4)
            printf("KIN\n");
        else
            printf("%d\n", scores[1] + scores[2] + scores[3]);
    }

    return 0;
}