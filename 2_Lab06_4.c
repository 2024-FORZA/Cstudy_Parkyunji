//1152
#include<stdio.h>
#include<string.h>

int main(void) {
	int len, cnt = 0; // cnt : �ܾ��� ����
	char sentence[1000001];

	scanf("%[^\n]s", sentence);  // ���� ���� �Է� ����.
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