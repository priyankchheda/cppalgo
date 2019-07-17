#include <iostream>
#include <string>

int main()
{
    std::string a, b;
    getline(std::cin, a);
    getline(std::cin, b);

    std::cout << a.size() << " " << b.size() << std::endl;
    std::cout << a + b << std::endl;
    char _a = a[0];
    a[0] = b[0];
    b[0] = _a;
    std::cout << a << " " << b << std::endl;
}