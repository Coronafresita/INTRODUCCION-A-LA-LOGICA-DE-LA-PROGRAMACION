#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int mayor = -1;
    for (int i = 0; i < n; i++) {
        int nota;
        cin >> nota;
        if (nota > mayor) {
            mayor = nota;
        }
    }

    cout << mayor << endl;

    return 0;
}