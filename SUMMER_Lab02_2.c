//1475
#include<stdio.h>

int main()
{
	int N, max = 0;
	int count[10] = { 0, };
	scanf("%d", &N);

	for (int i = N; i > 0; i = i / 10)
	{
		count[i % 10]++;
	}

	if ((count[6] + count[9]) % 2 != 0) {
		count[6] = ((int)((count[6] + count[9]) / 2.0)) + 1;
	}
	else {
		count[6] = (count[6] + count[9]) / 2;
	}

	for (int i = 0; i < 9; i++)
	{
		if (max < count[i]) {
			max = count[i];
		}
	}

	printf("%d\n", max);

	return 0;
}