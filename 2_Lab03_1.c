//3040
#include <stdio.h>

int main() {
	int hat[9], sum = 0, a, b;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &hat[i]);
		sum += hat[i];
	}
	sum -= 100;   // ÀÏ°ö³­ÀïÀÌ°¡ ¾Æ´Ñ µÎ ³­ÀïÀÌÀÇ ¸ğÀÚÀÇ ¼ö ÇÕ

	for (int i = 0; i < 9; i++) {   // ÀÏ°ö ³­ÀïÀÌ°¡ ¾Æ´Ñ µÎ ³­ÀïÀÌ ±¸ÇÏ±â
		for (int j = 0; j < 9; j++) {
			if ((i != j) && (hat[i] + hat[j] == sum)) {
				a = i;
				b = j;
				break;
			}
		}
	}

	for (int i = 0; i < 9; i++) {  // ÀÏ°ö ³­ÀïÀÌ ¸ğÀÚÀÇ ¼ö Ãâ·Â
		if ((i != a) && (i != b)) {
			printf("%d\n", hat[i]);
		}
	}

	return 0;
}