// 2902
#include<stdio.h>
#include<string.h>

int main() {
	char Lmemo[100];
	char Smemo[100];
	scanf("%s", Lmemo);

	int j = 0;
	for (int i = 0; Lmemo[i] != NULL; i++) {
		if (isupper(Lmemo[i])) {  // ���� ���ڰ� �빮�ڶ��
			Smemo[j] = Lmemo[i];
			j++;
		}
	}
	Smemo[j] = NULL;  // ���ڿ� ���� NULL�� �־� ���ڿ��� �������� ǥ��

	printf("%s",Smemo);

	return 0;
}