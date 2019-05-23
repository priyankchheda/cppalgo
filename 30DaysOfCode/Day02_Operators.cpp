#include <iostream>
#include <cmath>
using namespace std;

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) {
	double result = 0.0;
	double tip_cost = meal_cost * ((double)tip_percent/100);
	double tax_cost = meal_cost * ((double)tax_percent/100);
	result = meal_cost + tip_cost + tax_cost;
	cout << round(result) << endl;
}

int main()
{
	double meal_cost;
	cin >> meal_cost;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	int tip_percent;
	cin >> tip_percent;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	int tax_percent;
	cin >> tax_percent;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	solve(meal_cost, tip_percent, tax_percent);

	return 0;
}
