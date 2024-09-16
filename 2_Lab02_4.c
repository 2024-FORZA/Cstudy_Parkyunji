//10797
#include <stdio.h>

int main() {
	int date, count = 0;
	int car[5];
	
	scanf("%d", &date);
	for (int i = 0; i < 5; i++) {
		scanf("%d", &car[i]);
		if (car[i] == date)
			count++;
	}
	printf("%d\n", count);
	
	return 0;
}