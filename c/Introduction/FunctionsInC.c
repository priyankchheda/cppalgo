#include <stdio.h>

int maxOfFour(int a, int b, int c, int d)
{
    int max = a;
    if (max < b) max = b;
    if (max < c) max = c;
    if (max < d) max = d;
    return max;
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = maxOfFour(a, b, c, d);
    printf("%d", ans);
    return 0;
}

