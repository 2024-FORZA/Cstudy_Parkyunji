//2596
#include<stdio.h>

int cnt; // 틀린 글자 수 카운트
char ans[10]; // 정답 기록
int x = 0; // ans의 인덱스
int check = 0; // 알아볼 수 없는 문자가 처음 나오는 위치
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
			for (int k = 0; k < 6; k++) {  // 6자리 일치여부 확인
				if (str[j][k] != a[i][k])
					cnt++;
			}
			// 모두 일치하거나 한자리만 틀렸을 경우
			if (cnt == 0 || cnt == 1){
				ans[x] = cha[j]; // 정답 기록
				x++; // 다음 인덱스 
				break;
			}
			// 일치하는 문자가 없을 경우
			if (j == 7){
				check = i + 1;
			}
		}
		if (check != 0) 
			break; // 일치하는 문자가 없을 경우
	}

	if (check == 0){
		for (int i = 0; i < N; i++){
			printf("%c", ans[i]);
		}
	}
	else printf("%d", check);

	return 0;
}