#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i = 4;
	double d = 4.0;
	string s = "HackerRank";

	int ui;
	double ud;
	string us;

	cin >> ui;
	cin >> ud;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	getline(cin, us);

	cout << i + ui << endl;
	cout << fixed << setprecision(1) << d + ud << endl;
	cout << s + us << endl;
}