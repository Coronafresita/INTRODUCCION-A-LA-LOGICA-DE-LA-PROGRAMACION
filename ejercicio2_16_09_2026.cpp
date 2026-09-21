#include <iostream>
using namespace std;
int main()
{
    int n;
    
    cout << "Ingrese edad: ";
    cin >> n;

    if (0 < n && n <= 2) 
    {
        cout << "BEBE" << endl;
    } else if (3 <= n && n <= 11) {
        cout << "NIÑO" << endl;
    } else if (12 <= n && n <= 17) {
        cout << "ADOLESCENTE" << endl;
    } else if (18 <= n && n <= 59) {
        cout << "ADULTO" << endl;
    } else if (60 <= n) {
        cout << "ADULTO MAYOR" << endl;}
    return 0;

}