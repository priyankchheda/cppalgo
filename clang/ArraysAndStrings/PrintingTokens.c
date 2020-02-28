#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    
    int i = 0;
    while (s[i] != '\0') {
        printf("%c", s[i]);
        if (s[i] == ' ') printf("\n");
        i++;
    }

    free(s);
    return 0;
}

