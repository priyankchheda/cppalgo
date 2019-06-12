#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	int or, and, xor;
	int mOr = 0;
	int mAnd = 0;
	int mXor = 0;

	for (int i = 1; i < a + 1; i++) {
		for (int j = i + 1; j < a + 1 && j>i; j++) {

			or = i | j;
			if (mOr < or && or < b) mOr = or;

			and = i & j;
			if (mAnd < and && and < b) mAnd = and;
			
		
			xor = i ^ j;
			if (mXor < xor && xor < b) mXor = xor;
		}
	}

	printf("%d\n", mAnd);
	printf("%d\n", mOr);
	printf("%d\n", mXor);

	return 0;
}