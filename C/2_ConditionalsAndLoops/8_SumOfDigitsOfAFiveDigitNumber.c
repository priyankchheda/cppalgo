#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);

	int sum = 0;
	while (a) {
		sum += a % 10;
		a /= 10;
	}

	printf("%d\n", sum);

	return 0;
}