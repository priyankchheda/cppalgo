#include <iostream>
#include <string>

int main()
{
    int n;
    std::cin >> n;

    std::string dataSet[] = {
        "Greater than 9", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"};

    if (n > 9) {
        std::cout << dataSet[0];
    } else {
        std::cout << dataSet[n];
    }
}
