#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> split_string(string);



int main()
{
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string nk_temp;
        getline(cin, nk_temp);
        vector<string> nk = split_string(nk_temp);
        int n = stoi(nk[0]);
        int k = stoi(nk[1]);

        int mAnd = 0;
        int r;
        for (int i = 1; i < n + 1; i++) {
            for (int j = i + 1; j < n + 1 && j>i; j++) {
                r = i & j;
                if (mAnd < r && r < k)
                    mAnd = r;
            }
        }
        cout << mAnd << endl;
    }

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
