//2596
#include<stdio.h>

int cnt; // Ʋ�� ���� �� ī��Ʈ
char ans[10]; // ���� ���
int x = 0; // ans�� �ε���
int check = 0; // �˾ƺ� �� ���� ���ڰ� ó�� ������ ��ġ
char a[10][7];
char str[10][7] = { {'0','0','0','0','0','0'},  // A
				   {'0','0','1','1','1','1'},  // B
				   {'0','1','0','0','1','1'},  // C
				   {'0','1','1','1','0','0'},  // D
				   {'1','0','0','1','1','0'},  // E
				   {'1','0','1','0','0','1'},  // F
				   {'1','1','0','1','0','1'},  // G
				   {'1','1','1','0','1','0'} }; // H
char cha[8] = { 'A','B','C','D','E','F','G','H' };

int main(void)
{
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++){
		for (int j = 0; j < 6; j++){
			scanf(" %c", &a[i][j]);
		}
	}

	for (int i = 0; i < N; i++){
		for (int j = 0; j < 8; j++) {  // A ~ H
			cnt = 0;
			for (int k = 0; k < 6; k++) {  // 6�ڸ� ��ġ���� Ȯ��
				if (str[j][k] != a[i][k])
					cnt++;
			}
			// ��� ��ġ�ϰų� ���ڸ��� Ʋ���� ���
			if (cnt == 0 || cnt == 1){
				ans[x] = cha[j]; // ���� ���
				x++; // ���� �ε��� 
				break;
			}
			// ��ġ�ϴ� ���ڰ� ���� ���
			if (j == 7){
				check = i + 1;
			}
		}
		if (check != 0) 
			break; // ��ġ�ϴ� ���ڰ� ���� ���
	}

	if (check == 0){
		for (int i = 0; i < N; i++){
			printf("%c", ans[i]);
		}
	}
	else printf("%d", check);

	return 0;
}