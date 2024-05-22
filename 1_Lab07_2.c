//10809
#include<stdio.h>

int main()
{
	char S[101];
	char A[27] = "abcdefghijklmnopqrstuvwxyz";
	int count[26];

	scanf("%s", &S);


	for (int j = 0; j < 26; ++j)
		count[j] = -1;

	int i = 0;
	while (S[i]){
		for (int j = 0; j < 26; ++j){
			if ((count[j] == -1) && (S[i] == A[j])){
				count[j] = i;
			}
		}
		++i;
	}

	for (int j = 0; j < 26; ++j)
		printf("%d ", count[j]);

	return 0;
}