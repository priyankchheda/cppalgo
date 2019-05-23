#include <iostream>
#include <string>

int main()
{
	int t;
	std::string str;
	std::cin >> t;
	for(int i=0; i < t; i++) {
		std::cin >> str;
		std::string even, old;
		for (int i = 0; i < str.length(); i++) {
			if (i % 2 == 0) {
				even += str[i];
			} else {
				old += str[i];
			}
		}
		std::cout << even << " " << old << std::endl;
	}
}