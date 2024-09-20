//5597
#include<stdio.h>

int main()
{
	int n;
	int submit[31] = { 0, };

	for (int i = 0; i < 28; i++) {
		scanf("%d", &n);
		submit[n] = 1;
	}

	for (int i = 1; i < 31; i++) {
		if (submit[i] == 0)
			printf("%d\n", i);
	}

	return 0;
}