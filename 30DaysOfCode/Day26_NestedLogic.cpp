#include <iostream>
using namespace std;

int main()
{
	int return_date, return_month, return_year;
	int expected_return_date, expected_return_month, expected_return_year;

	cin >> return_date >> return_month >> return_year;
	cin >> expected_return_date >> expected_return_month >> expected_return_year;

	if (return_year < expected_return_year) {
		cout << 0 << endl;
	} else if (return_year == expected_return_year) {
		if (return_month <= expected_return_month) {
			if (return_date <= expected_return_date) {
				cout << 0 << endl;
			} else {
				cout << 15 * (return_date - expected_return_date) << endl;
			}
		} else {
			cout << 500 * (return_month - expected_return_month) << endl;
		}
	} else {
		cout << 10000 << endl;
	}
}