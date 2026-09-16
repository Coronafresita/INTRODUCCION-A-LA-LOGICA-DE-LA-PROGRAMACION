#include <iostream>

using namespace std;

int main() {
    int c, p;
    cin >> c >> p;

    if (p != 0) {
        int para_cada_uno = c / p;
        int sobran = c % p;
        cout << para_cada_uno << " " << sobran << endl;
    }

    return 0;
}