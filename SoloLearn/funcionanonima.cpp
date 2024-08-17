#include <iostream>

using namespace std;


int main() {

    auto mayor = [] (int a, int b) -> int { return ( a > b ) ? a : b; } ;

    cout << mayor(1,5); << endl;

    return 0;
}
