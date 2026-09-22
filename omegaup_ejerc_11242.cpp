#include <iostream>
using namespace std;
int main()
{
    int CLAVE , MIN;

    double PRECIO = 0.0;

    cin >> CLAVE >> MIN;

    switch (CLAVE)
    {
        case 12:
        cout << MIN * 2.0;break;
        case 15:
        cout << MIN * 2.2;break;
        case 18:
        cout << MIN * 4.5;break;
        case 19:
        cout << MIN * 3.5;break;
        case 23:
        cout << MIN * 6.0;break;
        case 25:
        cout << MIN * 6.0;break;
        case 29:
        cout << MIN * 5.0;break;
        default:
        cout << "clave incorrecta intentelo de nuevo";break;

    }
return 0;
}