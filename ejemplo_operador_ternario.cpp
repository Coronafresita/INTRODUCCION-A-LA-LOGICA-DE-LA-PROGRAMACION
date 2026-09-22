#include <iostream>
using namespace std;

int main() 
{
    int edad;
    cout << "Ingresa tu edad: ";
    cin >> edad;

    // Uso del operador ternario
    string mensaje = (edad >= 18) ? "Eres mayor de edad" : "Eres menor de edad";

    cout << mensaje << endl;
    
    return 0;
}