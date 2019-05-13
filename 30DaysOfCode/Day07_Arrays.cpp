#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <sstream>

int main()
{
    int n;
    std::cin >> n;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::string arr_temp;
    getline(std::cin, arr_temp);

    std::stringstream ss(arr_temp);
    std::vector<int> v;
    int temp;

    while (ss >> temp) {
        v.push_back(temp);
    }

    for (int i = n-1; i >= 0; i--)
        std::cout << v[i] << " ";
}
