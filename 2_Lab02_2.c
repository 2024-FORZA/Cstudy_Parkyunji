//2884
#include <stdio.h>

int main() {
	int H, M;
	scanf("%d %d", &H, &M);

	if (M >= 45) {
		M -= 45;
	}
	else if (H > 0) {
		M = 60 - (45 - M);
		H--;
	}
	else {
		M = 60 - (45 - M);
		H = 23;
	}
	printf("%d %d\n", H, M);

	return 0;
}