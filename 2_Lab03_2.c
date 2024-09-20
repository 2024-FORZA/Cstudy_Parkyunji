//4796
#include <stdio.h>

int main() {
	int L, P, V,camp;
	
	int idx = 1;
	while (1) {
		scanf("%d %d %d", &L, &P, &V);
		if (L == 0)
			break;

		if (V % P > L) {
			camp = L * (V / P) + L;
		}
		else {
			camp = L * (V / P) + V % P;
		}

		printf("Case %d: %d\n", idx,camp);
		idx++;
	}

	return 0;
}