#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;

    if (x == y && y == z) {
        cout << "equilatero" << endl;
    }
    if ((x == y || y == z || x == z) && !(x == y && y == z)) {
        cout << "isosceles" << endl;
    }
    if (x != y && y != z && x != z) {
        cout << "escaleno" << endl;
    }

    return 0;
}