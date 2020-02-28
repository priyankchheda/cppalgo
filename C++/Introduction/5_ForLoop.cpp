#include <cstdio>
#include <string>

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    std::string dataSet[] = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"};

    for (int i = a; i <= b; i++) {
        if (i <= 9) {
            printf("%s\n", dataSet[i].c_str());
        } else {
            if (i % 2) {
                printf("odd\n");
            } else {
                printf("even\n");
            }
        }
    }

    return 0;
}