//1735
#include <stdio.h>

int GCD(int a, int b)  //��Ŭ���� ȣ���� ���
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return GCD(b, a % b);
	}
}

int main(void)
{
	int a, b, c, d;
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);

	int bunja = a * d + b * c;
	int bunmo = b * d;
	int gcdBunsu = GCD(bunja, bunmo);

	printf("%d %d", bunja / gcdBunsu, bunmo / gcdBunsu);
	return 0;
}