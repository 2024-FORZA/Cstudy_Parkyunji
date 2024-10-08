// 10820
#include<stdio.h>
#include<string.h>
int main() {
	while (1) {
		char string[101] = {0,};
		scanf("%[^\n]s", string);  // \n을 입력하기 전까지 입력 받음 (공백포함)

		if (string[0] == '\0')
			break;

		int small = 0, big = 0, num = 0, blank = 0;

		for (int i = 0; i < strlen(string); i++) {
			if (string[i] == 32)
				blank++;
			else if ((48 <= string[i]) && (string[i] <= 57))
				num++;
			else if ((65 <= string[i]) && (string[i] <= 90))
				big++;
			else if ((97 <= string[i]) && (string[i] <= 122))
				small++;
		}
		printf("%d %d %d %d\n", small, big, num, blank);
		scanf("%*c");
	}
	return 0;
}