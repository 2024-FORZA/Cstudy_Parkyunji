//5622
#include<stdio.h>

int main() {

	int time[26] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };

	char word[16];
	int sum = 0;

	scanf("%s", word);

	for (int i = 0; i < strlen(word); i++) {
		sum += time[word[i] - 'A'];
	}

	printf("%d", sum);

	return 0;
}