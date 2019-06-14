#include <stdio.h>

int main()
{
    char str[1024];
    int count[10];
    for (int i = 0; i < 10; i++) {
        count[i] = 0;
    }

    scanf("%s", str);

    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            int k = str[i] - '0';
            count[k]++;
        }
        i++;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", count[i]);
    }

    return 0;
}