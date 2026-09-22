#include <iostream>
using namespace std;
int main() 
{
    int dia;
    cout << "Ingrese un numero de dia del 1 al 7: ";
    cin >> dia;

    switch (dia) 
    {
        case 1:
            cout << "Lunes";break;
        case 2:
            cout << "Martes";break;
        case 3:
            cout << "Miercoles";break;
        case 4:
            cout << "Jueves";break;
        case 5:
            cout << "Viernes";break;
        case 6:
            cout << "Sabado";break;
        case 7:
            cout << "Domingo";break;
        default:
            cout << "Numero de dia invalido.";break;
    }
    cout << endl;
    return 0;
}