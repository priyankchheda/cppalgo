#include <iostream>

using namespace std;

//Implement the class Box
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions :

// Constructors:
// Box();
// Box(int,int,int);
// Box(Box);

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box {
    int l, b, h;
public:
    // constructors
    Box() {l = 0; b = 0; h = 0; }
    Box(int _l, int _b, int _h) {l = _l; b = _b; h = _h; }
    Box(Box &box) { l = box.l; b = box.b; h = box.h; }

    // getters
    int getLength() { return l; }
    int getBreadth() { return b; }
    int getHeight() { return h; }

    long long CalculateVolume() { return (long long) l * b * h; }
    
    bool operator<(Box& b);
    friend ostream& operator << (ostream& out, Box& B);
};

bool Box::operator < (Box &box) {
    if (l < box.l) return true;
    else if (b < box.b && l == box.l) return true;
    else if (h < box.h && b == box.b && l == box.l) return true;
    else return false;
}

ostream & operator << (ostream & out, Box& B) {
    out << B.l << " " << B.b << " " << B.h;
    return out;
}

void check2() {
    int n;
    cin >> n;
    Box temp;
    for (int i = 0; i < n; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
            cout << temp << endl;

        if (type == 2) {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            temp = NewBox;
            cout << temp << endl;
        }

        if (type == 3) {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            if (NewBox < temp)
                cout << "Lesser\n";
            else cout << "Greater\n";
        }

        if (type == 4)
            cout << temp.CalculateVolume() << endl;

        if (type == 5) {
            Box NewBox(temp);
            cout << NewBox << endl;
        }
    }
}

int main() {
    check2();
}