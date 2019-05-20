#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number;
    cin >> number;

    int max = 0;
    int count = 0;

    int bit;
    while (number) {
        bit = number % 2;
        if (bit == 1){
            count++;   
        } else {
            count = 0;
        }
        if (max < count) {
            max = count;
        }
        number = number / 2;
    }

    cout << max << endl;
}