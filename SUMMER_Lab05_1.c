//4963
#include<stdio.h>
#include<string.h> 
int arr[60][60] = { 0, };
int visited[60][60] = { 0, };
int dw[10] = { 0,0,1,1,1,-1,-1,-1 };
int dh[10] = { 1,-1,0,1,-1,0,1,-1 };

void dfs(int i, int k) {
	int w, h;
	visited[i][k] = 1;

	for (int t = 0; t < 8; t++) {
		w = k + dw[t];
		h = i + dh[t];
		if (arr[h][w] == 1 && visited[h][w] == 0)
			dfs(h, w);
	}
}

int main(void) {
	int w, h;
	int count;
	while (1) {

		scanf("%d %d", &w, &h);
		for (int i = 1; i <= h; i++) {
			for (int k = 1; k <= w; k++)
				scanf("%d", &arr[i][k]);
		}
		if (w == 0 && h == 0)
			break;

		count = 0;
		for (int i = 1; i <= h; i++) {
			for (int k = 1; k <= w; k++) {
				if (arr[i][k] == 1 && visited[i][k] == 0) {
					count++;
					dfs(i, k);
				}
			}
		}
		printf("%d\n", count);
		for (int i = 1; i <= h; i++) {
			memset(arr[i], 0, sizeof(int) * 60);
			memset(visited[i], 0, sizeof(int) * 60);
		}
	}
	return 0;
}