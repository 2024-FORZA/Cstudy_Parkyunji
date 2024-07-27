//1546
#include<stdio.h>
int main() 
{
	int N, max = 0;
	float sum = 0, avr;
	scanf("%d",&N);
	
	int scores[1000] = {0,};

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &scores[i]);
		
		if (max < scores[i])
		{
			max = scores[i];
		}
	}


	for (int i = 0; i < N; i++)
	{
		sum += (float)scores[i] / max * 100;
	}

	avr = sum / N;
	printf("%f\n",avr);

	return 0;
}