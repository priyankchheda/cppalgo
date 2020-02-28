#include <iostream>
#include <set>

int main()
{
    std::set<int> s;
    int queries;
    std::cin >> queries;
    for (int i = 0; i < queries; i++) {
        int condition, value;
        std::cin >> condition >> value;
        switch(condition) {
            case 1:
                s.insert(value);
                break;
            case 2:
                s.erase(value);
                break;
            case 3:
                std::set<int>::iterator it = s.find(value);
                if (it == s.end()) std::cout << "No\n";
                else std::cout << "Yes\n";
                break;
        }
    }
    return 0;
}