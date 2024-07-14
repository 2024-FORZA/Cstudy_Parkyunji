//2563
#include<stdio.h>

int main()
{
	int wpaper[100][100] = { 0, };
	int sum = 0, num;
	scanf("%d", &num);

	for (int i = 0; i < num; i++){
		int x, y;
		scanf("%d %d", &x, &y);

		for (int j = x; j < x + 10; j++){
			for (int k = y; k < y + 10; k++){
				wpaper[j][k] = 1;
			}
		}
	}

	for (int i = 0; i < 100; i ++){
		for (int j = 0; j < 100; j++){
			if (wpaper[i][j] == 1)
				sum ++;
		}
	}

	printf("%d", sum);

	return 0;
}