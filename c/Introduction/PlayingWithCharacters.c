#include <stdio.h>

#define MAX_INT 100

int main()
{
    char ch;
    char word[MAX_INT];
    char sentence[MAX_INT];

    scanf("%c", &ch);
    scanf("%s", word);
    
    scanf("\n");
    scanf("%[^\n]%*c", sentence);

    printf("%c\n", ch);
    printf("%s\n", word);
    printf("%s\n", sentence);
    return 0;
}