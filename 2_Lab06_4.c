//1152
#include<stdio.h>
#include<string.h>

int main(void) {
	int len, cnt = 0; // cnt : 단어의 개수
	char sentence[1000001];

	scanf("%[^\n]s", sentence);  // 공백 포함 입력 받음.
	len = strlen(sentence);

	if ((len == 1) && (sentence[0] == ' ')) {
		printf("%d", cnt);
		return 0;
	}
	
	for (int i = 1; i < len-1; i++) {
		if (sentence[i] == ' ')
			cnt++;
	}
	printf("%d", cnt + 1);

	return(0);
}