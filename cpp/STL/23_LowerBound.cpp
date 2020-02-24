#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    for (int i = 0; i < n; i++)
        std::cin >> vec[i];
    
    int queries;
    std::cin >> queries;

    for (int i = 0; i < queries; i++) {
        int value;
        std::cin >> value;
        std::vector<int>::iterator it;
        it = lower_bound(vec.begin(), vec.end(), value);
        if (*it == value)
            std::cout << "Yes ";
        else std::cout << "No ";
        std::cout << it - vec.begin() + 1 << "\n";
    }
}