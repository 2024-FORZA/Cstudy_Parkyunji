// 7568
#include<stdio.h>


int main() {
    int N;
    int weight[50] = { 0, };
    int height[50] = { 0, };
    int rank[50] = { 0, };

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &weight[i],&height[i]);
    }

    for (int i = 0; i < N; i++) {
        int k = 0;  // 자신보다 더 큰 덩치를 가진 사람의 수
        for (int j = 0; j < N; j++) {
            if (i != j && weight[i] < weight[j] && height[i] < height[j])
                k++;
        }
        rank[i] = k + 1;  // 덩치 등수
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", rank[i]);
    }
    printf("\n");

    return 0;
}