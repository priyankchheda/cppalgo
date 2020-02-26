#include <iostream>
#include <map>

int main()
{
    std::map<std::string, int> records;
    int queries;
    std::cin >> queries;
    for (int i = 0; i < queries; i++) {
        int condition, mark;
        std::string name;
        std::cin >> condition;
        switch (condition) {
            case 1:
                std::cin >> name >> mark;
                records[name] += mark;
                break;
            case 2:
                std::cin >> name;
                records.erase(name);
                break;
            case 3:
                std::cin >> name;
                std::cout << records[name] << "\n";
                break;
        }
    }
    return 0;
}