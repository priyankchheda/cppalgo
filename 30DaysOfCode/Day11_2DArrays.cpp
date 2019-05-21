#include <iostream>
using namespace std;

int main() {
    int A[6][6];
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> A[i][j];
        }
    }

    int max = INT_MIN;
    for (int i = 1; i < 5; i++) {
        for (int j = 1; j < 5; j++) {
            int sum = 0;
            sum += A[i-1][j-1];
            sum += A[i-1][j];
            sum += A[i-1][j+1];
            sum += A[i][j];
            sum += A[i+1][j-1];
            sum += A[i+1][j];
            sum += A[i+1][j+1];
            if (max < sum) {
                max = sum;
            }
        }
    }
    cout << max << endl;
}