//2675
#include<stdio.h>

int main()
{
	int T,R,j;
	char S[21];

	scanf("%d", &T);

	for (int i = 0;i < T;++i) {
		scanf("%d %s", &R, &S);

		j = 0;
		while (S[j]){
			for (int n = 0; n < R; ++n)
			{
				printf("%c", S[j]);
			}
			++j;
		}
		printf("\n");
	}

	return 0;
}