#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a, b);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    return strcmp(b, a);
}

int distinct_chars(const char *a)
{
    int dist = 0;
   
    while (*a != '\0') {
        if (!strchr(a + 1, *a))
            dist++;
        a++;
    }
    return dist;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int res = distinct_chars(a) - distinct_chars(b);
    return (res) ? res : lexicographic_sort(a, b);
}

int sort_by_length(const char* a, const char* b)
{
    int res = strlen(a) - strlen(b);
    return (res) ? res : strcmp(a, b);;
}


void string_sort(char** arr,
                 const int len,
                 int (*cmp_func)(const char* a, const char* b))
{
    for (int i = 0; i < len; i++) {
        int min_element_index = i;
        for (int j = i + 1; j < len; j++) {
            if (cmp_func(arr[j], arr[min_element_index]) < 0)
                min_element_index = j;
        }
        char *tmp = arr[i];
        arr[i] = arr[min_element_index];
        arr[min_element_index] = tmp;
    }
}


int main() 
{

    int n;
    scanf("%d", &n);

    char** arr;
    arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }

   string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n"); 

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");
}