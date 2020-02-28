#include <stdio.h>

int main()
{
	int number;
	scanf("%d", &number);

	if (number == 1) printf("one\n");
	else if (number == 2) printf("two\n");
	else if (number == 3) printf("three\n");
	else if (number == 4) printf("four\n");
	else if (number == 5) printf("five\n");
	else if (number == 6) printf("six\n");
	else if (number == 7) printf("seven\n");
	else if (number == 8) printf("eight\n");
	else if (number == 9) printf("nine\n");
	else printf("Greater than 9\n");

	return 0;
}