#include <iostream>
#include <vector>
#include <limits>

int main()
{
    int userSize, queries;
    std::cin >> userSize >> queries;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    int arraySize;
    std::vector< std::vector<int> > a(userSize);
    for (int i = 0; i < userSize; i++) {
        std::cin >> arraySize;
        a[i] = std::vector<int>(arraySize);
        for (int j = 0; j < arraySize; j++) {
            std::cin >> a[i][j];
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    for (int i = 0; i < queries; i++) {
        int m, n;
        std::cin >> m >> n;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << a[m][n] << std::endl;
    }
}