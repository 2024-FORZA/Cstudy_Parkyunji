// 2902
#include<stdio.h>
#include<string.h>

int main() {
	char Lmemo[100];
	char Smemo[100];
	scanf("%s", Lmemo);

	int j = 0;
	for (int i = 0; Lmemo[i] != NULL; i++) {
		if (isupper(Lmemo[i])) {  // 현재 문자가 대문자라면
			Smemo[j] = Lmemo[i];
			j++;
		}
	}
	Smemo[j] = NULL;  // 문자열 끝에 NULL을 넣어 문자열이 끝났음을 표시

	printf("%s",Smemo);

	return 0;
}