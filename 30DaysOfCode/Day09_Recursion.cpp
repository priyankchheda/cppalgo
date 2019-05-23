#include <iostream>
using namespace std;

int factorial(int n) {
	if (n < 2) {
		return 1;
	}
	return n * factorial(n-1);
}

int main()
{
	int n;
	cin >> n;

	int result = factorial(n);
	cout << result << endl;
}