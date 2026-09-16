#include <iostream>
#include <string>

using namespace std;

int main() {
    string palabra1, palabra2, palabra3;
    cin >> palabra1 >> palabra2 >> palabra3;

    if (palabra1 == "vertebrado") {
        if (palabra2 == "ave") {
            if (palabra3 == "carnivoro") {
                cout << "aguila" << endl;
            } else if (palabra3 == "onivoro") {
                cout << "paloma" << endl;
            }
        } else if (palabra2 == "mamifero") {
            if (palabra3 == "onivoro") {
                cout << "homem" << endl;
            } else if (palabra3 == "herbivoro") {
                cout << "vaca" << endl;
            }
        }
    } else if (palabra1 == "invertebrado") {
        if (palabra2 == "inseto") {
            if (palabra3 == "hematofago") {
                cout << "pulga" << endl;
            } else if (palabra3 == "herbivoro") {
                cout << "lagarta" << endl;
            }
        } else if (palabra2 == "anelideo") {
            if (palabra3 == "hematofago") {
                cout << "sanguessuga" << endl;
            } else if (palabra3 == "onivoro") {
                cout << "minhoca" << endl;
            }
        }
    }

    return 0;
}