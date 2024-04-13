//10817
#include <stdio.h>
int main()
{
	int A, B, C, sec;
	scanf("%d %d %d", &A, &B, &C);
	if ((A >= B && A <= C) || (A <= B && A >= C))
		sec = A;
	else if ((B >= A && B <= C) || (B <= A && B >= C))
		sec = B;
	else
		sec = C;
	printf("%d\n", sec);
}