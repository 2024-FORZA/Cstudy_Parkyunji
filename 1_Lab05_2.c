//10807
#include<stdio.h>

int main()
{
	int N,v;
	int count = 0;
	scanf("%d", &N);
	int x[100] = { 0 };

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &x[i]);
	}

	scanf("%d", &v);
	for (int j = 0; j < N; j++)
	{
		if (x[j] == v)
			count++;
	}

	printf("%d\n", count);
}