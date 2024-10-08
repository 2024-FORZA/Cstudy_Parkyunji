// 1547
#include<stdio.h>
int main() {
	int M;
	scanf("%d", &M);
	int cup[4] = { 0,1,0,0 };

	for (int i = 0; i < M; i++) {
		int x, y, z;
		scanf("%d %d", &x, &y);
		z = cup[y];
		cup[y] = cup[x];
		cup[x] = z;
	}
	
	for (int i = 1; i < 4; i++) {
		if (cup[i] == 1) {
			printf("%d\n", i);
			break;
		}
	}
	return 0;
}