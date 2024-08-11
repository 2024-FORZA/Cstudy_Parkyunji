//2720
#include<stdio.h>

int main()
{
	int T,C;
	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d", &C);
		int Q = 0, D = 0, N = 0, P = 0;

		Q = C / 25;
		C -= Q * 25;

		D = C / 10;
		C -= D * 10;

		N = C / 5;
		C -= N * 5;

		P = C;

		printf("%d %d %d %d\n",Q,D,N,P);
	}

	return 0;
}