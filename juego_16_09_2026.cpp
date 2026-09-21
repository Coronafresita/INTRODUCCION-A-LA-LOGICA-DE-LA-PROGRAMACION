#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    //jugadas
    srand(time(0));
    //jugadores
    string jugador;
    string computadora;
    
    int option = (rand() % 3) + 1;
    
    if (option == 1)
    { computadora = "piedra"; }
    if (option == 2)
    { computadora = "papel"; }
    if (option == 3)
    { computadora = "tijera"; }
    
    cout << "Elige: |piedra| |papel| |tijera| : ";
    cin >> jugador;
    
    cout << "La computadora eligio: " << computadora << endl;
    
   // Caso de Empate
    if (jugador == computadora) {
        cout << "¡Empate!" << endl;
    }

    // Caso de Victoria del Jugador
    if ((jugador == "piedra" && computadora == "tijera") ||
        (jugador == "papel" && computadora == "piedra") ||
        (jugador == "tijera" && computadora == "papel")) {
        cout << "¡Ganaste!" << endl;
    }

    // Caso de Derrota del Jugador
    if ((computadora == "piedra" && jugador == "tijera") ||
        (computadora == "papel" && jugador == "piedra") ||
        (computadora == "tijera" && jugador == "papel")) {
        cout << "Perdiste contra la computadora." << endl;
    }

    return 0;
}