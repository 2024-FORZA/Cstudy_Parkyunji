//1037
#include<stdio.h>

int main()
{
	int num,N;
	long long max = 1;
	long long min = 1000001;

	scanf("%d",&num);
	
	for (int i=0;i<num;i++)
	{
		int a;
		scanf("%d", &a);

		if (a < min)
			min = a;
		if (a > max)
			max = a;
	}


	printf("%lld", max * min);

	return 0;
}