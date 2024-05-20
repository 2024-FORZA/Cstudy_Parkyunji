//1547
#include<stdio.h>

int main()
{
	int M;
	int ball = 1;

	scanf("%d",&M);
	for (int i = 0; i < M; i++)
	{
		int X, Y;
		scanf("%d %d", &X, &Y);

		if (X == ball)
		{
			ball = Y;
		}
		else if (Y == ball)
		{
			ball = X;
		}

	}

	printf("%d",ball);

	return 0;
}