#include <iostream>
#include <string>
using namespace std;

int main() {

	string s;
	cin >> s;

	try {
		int i = stoi(s);
		cout << i << '\n';
	}
	catch (invalid_argument const &e) {
		cout << "Bad String\n";
	}
	catch (out_of_range const &e) {
		cout << "Bad String\n";
	}

	return 0;
}