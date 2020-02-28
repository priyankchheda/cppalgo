#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

        cout << hex << left << showbase << nouppercase;
        cout <<(long long)A << endl;

        cout << right << fixed << setprecision(2) << showpos << setfill('_')
            << setw(15);
        cout << B << endl;

        cout << scientific << uppercase << setprecision(9) << noshowpos;
        cout << C << endl;

	}
	return 0;

}
