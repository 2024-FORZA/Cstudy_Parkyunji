// 2851
#include<stdio.h>

int main() {
    int mushroom[10];
    int min, max;  // 100에 가장 가까운 2개의 수.
    int sum = 0;  // 점수들의 총합

    // 각각의 버섯의 점수
    for (int i = 0; i < 10; i++) {
        scanf("%d", &mushroom[i]);
    }

    for (int i = 0; i < 10; i++) {
        sum += mushroom[i];
        if (sum >= 100) {
            min = sum - mushroom[i];
            max = sum;
            break;
        }
    }

    // 100과의 차에 따라 더 가까운 수 찾음.
    if (100 - min > max - 100)
        printf("%d\n", max);
    else if (100 - min < max - 100)
        printf("%d\n", min);
    else
        printf("%d\n", max);     // 100에 가까운 수가 2개일 때 더 큰 값 선택

    return 0;
}