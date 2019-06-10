#include <iostream>
#include <sstream>
#include <vector>
#include <limits>
using namespace std;

int BubbleSort(vector<int>& vec);

int main()
{
	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	string arr;
	getline(cin, arr);

	stringstream ss(arr);
	vector<int> v;

	int temp;
	while (ss >> temp) {
		v.push_back(temp);
	}

	int numSwaps = BubbleSort(v);
	cout << "Array is sorted in " << numSwaps << " swaps." << endl;
	cout << "First Element: " << v[0] << endl;
	cout << "Last Element: " << v[v.size()-1] << endl;

	return 0;
}

int BubbleSort(vector<int>& vec)
{
	int numSwaps = 0;
	int n = vec.size();
	for (int i = 0; i < n; i++) {
		int numberOfSwaps = 0;
		for (int j = 0; j < n-1; j++) {
			if (vec[j] > vec[j+1]) {
				int temp = vec[j];
				vec[j] = vec[j+1];
				vec[j+1] = temp;
				numberOfSwaps++;
			}
		}
		numSwaps += numberOfSwaps;
		if (numberOfSwaps == 0) break;
	}
	return numSwaps;
}