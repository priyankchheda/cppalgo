#include <stdio.h>

#define MAX_LIMIT 100

int main()
{
    char str[MAX_LIMIT];
    scanf("%[^\n]%*c", str);
    printf("Hello, World!\n");
    printf("%s\n", str);
    return 0;
}