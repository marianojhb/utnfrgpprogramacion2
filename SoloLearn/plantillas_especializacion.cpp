#include <iostream>
using namespace std;

template <class T>
class Div {
    public:
        Div (T x, T y) {
            cout << x / y <<endl;
        }
};

template < >
class Div <string> {
    public:
        Div (T x, T y) {
            cout << (sizeof(x) / sizeof(y)) << endl;
        }
};


int main () {
    string a, b;
    cin >> a >> b;
    int x, y;
    cin >> x >> y;

    Div <string> d2(a, b);
    Div <int> d1(x, y);

}
