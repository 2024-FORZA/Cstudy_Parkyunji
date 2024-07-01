//11720
#include<stdio.h>

int main()
{
	int sum = 0, N;
	scanf("%d", &N);

	char num[101] = "";
	scanf("%s", num);

	for (int j = 0; j < N ; j++)
	{
		sum += num[j] - '0';
	}

	printf("%d\n", sum);

	return 0;
}