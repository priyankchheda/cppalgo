#include <stdio.h>

void update(int *a, int *b)
{
    int aTmp = *a;
    int bTmp = *b;

    *a = aTmp + bTmp;
    *b = aTmp - bTmp;
    if (*b < 0) *b *= -1;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    update(&a, &b);
    printf("%d\n%d\n", a, b);

    return 0;
}