#include <stdio.h>

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

int main(void)
{
	int iNum1, iNum2;
	scanf("%d %d", &iNum1, &iNum2);
	printf("최대공약수: %d\n", gcd(iNum1, iNum2));
	return 0;
}
