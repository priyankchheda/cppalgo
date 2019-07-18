#include <string>
#include <sstream>
#include <vector>
#include <iostream>

std::vector<int> parseInts(std::string str) {
    std::vector<int> number;
    std::stringstream ss(str);
    int num;
    while(ss >> num) {
        number.push_back(num);
        if (ss.peek() == ',')
            ss.ignore();
    }
    return number;
}

int main()
{
    std::string str;
    std::cin >> str;
    std::vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        std::cout << integers[i] << "\n";
    }
    return 0;
}