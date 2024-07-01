//8958
#include<stdio.h>

int main()
{
	int test;
	char testcase[80];
	int total_score, count;

	scanf("%d", &test);

	for (int i = 0; i < test; i++)
	{
		total_score = 0; count = 1;
		scanf("%s", testcase);

		for (int j = 0; j < strlen(testcase); j++)
		{
			if (testcase[j] == 'O')
			{
				total_score += count;
				count++;
			}
			else
				count = 1;
		}

		printf("%d\n", total_score);
	}

	return 0;
}