// 6996
#include<stdio.h>
#include<string.h>

int main()
{
	int t;
	char A[101];
	char B[101];
	char abc[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 
		'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 
		't', 'u', 'v', 'w', 'x', 'y', 'z' };

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%s %s", &A, &B);
		if (strlen(A) != strlen(B))
			printf("%s & %s are NOT anagrams.\n",A,B);
		else {
			int check_A[26] = { 0, };
			int check_B[26] = { 0, };

			for (int j = 0; j < strlen(A); j++) {
				for (int k = 0; k < 26; k++) {
					if (A[j] == abc[k]) {
						check_A[k]++;
						break;
					}
				}
			}

			for (int j = 0; j < strlen(B); j++) {
				for (int k = 0; k < 26; k++) {
					if (B[j] == abc[k]) {
						check_B[k]++;
						break;
					}
				}
			}

			int count = 0;
			for (int j = 0; j < 26; j++) {
				if (check_A[j] != check_B[j])
					count++;
			}

			if (count > 0)
				printf("%s & %s are NOT anagrams.\n",A, B);
			else
				printf("%s & %s are anagrams.\n", A, B);
		}
	}
	return 0;
}