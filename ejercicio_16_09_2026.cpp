#include <iostream>
using namespace std;

int main() 
{
    int x, y;

   cin >> x >> y;
   
    if (x > 0 && y > 0) {
        cout << "Cuadrante I" << endl;
    }
    if (x < 0 && y > 0) {
        cout << "Cuadrante II" << endl;
    }
    if (x < 0 && y < 0) {
        cout << "Cuadrante III" << endl;
    }
    if (x > 0 && y < 0) {
        cout << "Cuadrante IV" << endl;
    }
    if (x == 0 && y == 0) {
        cout << "Origen" << endl;
    }
    if ((x == 0 && y != 0) || (y == 0 && x != 0)) {
        cout << "Esta sobre un eje" << endl;
    }

    return 0;
}
