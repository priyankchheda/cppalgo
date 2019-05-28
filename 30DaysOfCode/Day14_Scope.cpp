#include <vector>
#include <iostream>
using namespace std;

class Difference
{
private:
	vector<int> elements;

public:
	int maximumDifference;
	Difference(vector<int> e): elements(e) {}

	void computeDifference()
	{
		auto minimum = min_element(elements.begin(), elements.end());
		auto maximum = max_element(elements.begin(), elements.end());
		maximumDifference = *maximum - *minimum;
	}
};

int main()
{
	int N;
	cin >> N;

	vector<int> a;
	for (int i = 0; i < N; i++) {
		int e;
		cin >> e;
		
		a.push_back(e);
	}
	
	Difference d(a);
	d.computeDifference();
	cout << d.maximumDifference;
	return 0;
}