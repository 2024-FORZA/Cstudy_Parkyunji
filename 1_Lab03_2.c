//2439

#include <stdio.h>
int main()
{
	int a,N,m;
	scanf("%d", &N);
	for (a = 1; a <= N; a++)
	{
		for (m=1;m<=N-a;m++)
		{
			printf(" ");
		}
		for (m = 1; m <= a; m++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}