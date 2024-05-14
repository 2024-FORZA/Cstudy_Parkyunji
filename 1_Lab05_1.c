//3052
#include<stdio.h>

int main()
{
	int x[10];
	int num = 0, count = 0;
	for (int i = 0; i < 10; ++i)
	{
		scanf("%d", &num);
		x[i] = num % 42;
	}

	int y[42] = { 0 };

	for (int i = 0; i < 10; ++i)
	{
		y[x[i]]++;
	}

	for (int i = 0; i < 42; ++i)
	{
		if (y[i] > 0)
			count++;
	}

	printf("%d\n", count);

}