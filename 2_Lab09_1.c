// 2851
#include<stdio.h>

int main() {
    int mushroom[10];
    int min, max;  // 100�� ���� ����� 2���� ��.
    int sum = 0;  // �������� ����

    // ������ ������ ����
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

    // 100���� ���� ���� �� ����� �� ã��.
    if (100 - min > max - 100)
        printf("%d\n", max);
    else if (100 - min < max - 100)
        printf("%d\n", min);
    else
        printf("%d\n", max);     // 100�� ����� ���� 2���� �� �� ū �� ����

    return 0;
}