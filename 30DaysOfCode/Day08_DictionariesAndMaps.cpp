#include <iostream>
#include <map>
#include <string>
#include <limits>
using namespace std;

int main()
{
    map<string, int> phonebook;
    int n;
    cin >> n;
    
    int number;
    string name;

    for (int i = 0; i < n; i++) {
        cin >> name >> number;
        phonebook[name] = number;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while(getline(cin, name)) {
        if (name.empty())
            break;
        if (phonebook.find(name) == phonebook.end()) {
            cout << "Not found\n";
        } else {
           cout << name << "=" << phonebook[name] << endl;
        }
    }
}