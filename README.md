# Resolución de Ejercicios: Uso de Operadores en C++

*Institución:* Universidad Nacional del Altiplano  
*Programa:* Ingeniería de Sistemas  
*Curso:* Introducción a la lógica de programación  

---

## Tabla Resumen de Ejercicios

| Ejercicio | Pseudocódigo Original | Salida Esperada |
| :---: | :--- | :---: |
| *1* | INICIO<br>X = 10, Y = 4<br>X = X + Y<br>Y = X - Y<br>X = X - Y<br>SALIDA X, Y<br>FIN | 4 10 |
| *2* | INICIO<br>A = 5, B = 10<br>C = (A++ + ++B) * 2<br>SALIDA A, B, C<br>FIN | 6 11 32 |
| *3* | INICIO<br>A = 5, B = 10<br>A += 3<br>B -= A<br>SALIDA A, B<br>FIN | 8 2 |
| *4* | INICIO<br>Y = 4, X = 4<br>Y = ++X<br>X = X++ + ++Y<br>SALIDA X, Y<br>FIN | 11 5 |
| *5* | INICIO<br>A = 10, B = 4<br>C = A % B * 3 + B - 1<br>SALIDA C<br>FIN | 9 |
| *6* | INICIO<br>A = 12, B = 5<br>C = A / B + A % B * 2<br>SALIDA C<br>FIN | 6 |
| *7* | INICIO<br>A = 7, B = 3<br>C = A * 2 + B % 2<br>A = A + B * 3 - C / 2<br>B = C % 3 + A / 2<br>SALIDA A, B, C<br>FIN | 9 4 15 |
| *8* | INICIO<br>X = 8, Y = 2<br>X += Y * 3<br>Y = X - Y<br>SALIDA X, Y<br>FIN | 14 12 |
| *9* | INICIO<br>X = 5<br>Y = ++X * X--<br>SALIDA X, Y<br>FIN | 5 36 |
| *10* | INICIO<br>A = 7, B = 3<br>C = ++A + B--<br>SALIDA A, B, C<br>FIN | 8 2 11 |

---

## Código Completo en C++

cpp
#include <iostream>
using namespace std;
xx
int main() 
{
    //10 EJERCICIOS EN C++
    
    // Ejercicio 1
    int X1 = 10, Y1 = 4;
    X1 = X1 + Y1;
    Y1 = X1 - Y1;
    X1 = X1 - Y1;
    cout << "Ex 1: " << X1 << " " << Y1 << endl;

    // Ejercicio 2
    int A2 = 5, B2 = 10;
    int C2 = (A2++ + ++B2) * 2;
    cout << "Ex 2: " << A2 << " " << B2 << " " << C2 << endl;

    // Ejercicio 3
    int A3 = 5, B3 = 10;
    A3 += 3;
    B3 -= A3;
    cout << "Ex 3: " << A3 << " " << B3 << endl;

    // Ejercicio 4
    int Y4 = 4, X4 = 4;
    Y4 = ++X4;
    X4 = X4++ + ++Y4;
    cout << "Ex 4: " << X4 << " " << Y4 << endl;

    // Ejercicio 5
    int A5 = 10, B5 = 4;
    int C5 = A5 % B5 * 3 + B5 - 1;
    cout << "Ex 5: " << C5 << endl;

    // Ejercicio 6
    int A6 = 12, B6 = 5;
    int C6 = A6 / B6 + A6 % B6 * 2;
    cout << "Ex 6: " << C6 << endl;

    // Ejercicio 7
    int A7 = 7, B7 = 3;
    int C7 = A7 * 2 + B7 % 2;
    A7 = A7 + B7 * 3 - C7 / 2;
    B7 = C7 % 3 + A7 / 2;
    cout << "Ex 7: " << A7 << " " << B7 << " " << C7 << endl;

    // Ejercicio 8
    int X8 = 8, Y8 = 2;
    X8 += Y8 * 3;
    Y8 = X8 - Y8;
    cout << "Ex 8: " << X8 << " " << Y8 << endl;

    // Ejercicio 9
    int X9 = 5;
    int Y9 = ++X9 * X9--;
    cout << "Ex 9: " << X9 << " " << Y9 << endl;

    // Ejercicio 10
    int A10 = 7, B10 = 3;
    int C10 = ++A10 + B10--;
    cout << "Ex 10: " << A10 << " " << B10 << " " << C10 << endl;

    return 0;
}


---

## Seguimiento Paso a Paso (Ejercicios del 1 al 10)

### Ejercicio 1
* *Inicio:* X = 10, Y = 4
* *Paso 1:* X = 10 + 4 = 14
* *Paso 2:* Y = 14 - 4 = 10
* *Paso 3:* X = 14 - 10 = 4
* *Resultado:* X = 4, Y = 10 (Intercambio de variables sin auxiliar)

### Ejercicio 2
* *Inicio:* A = 5, B = 10
* *Paso 1:* En (A++ + ++B) * 2:
  * A++ usa el valor actual 5 y luego A se incrementa a 6.
  * ++B incrementa B a 11 y usa el valor 11.
  * (5 + 11) * 2 = 16 * 2 = 32.
* *Resultado:* A = 6, B = 11, C = 32

### Ejercicio 3
* *Inicio:* A = 5, B = 10
* *Paso 1:* A += 3 $\rightarrow$ A = 5 + 3 = 8
* *Paso 2:* B -= A $\rightarrow$ B = 10 - 8 = 2
* *Resultado:* A = 8, B = 2

### Ejercicio 4
* *Inicio:* Y = 4, X = 4
* *Paso 1:* Y = ++X $\rightarrow$ X incrementa a 5, por lo que Y = 5.
* *Paso 2:* X = X++ + ++Y:
  * ++Y incrementa Y a 6.
  * X++ usa 5 y luego incrementa.
  * X = 5 + 6 = 11.
* *Resultado:* X = 11, Y = 5 (al sobrescribirse X con el resultado de la suma 11).

### Ejercicio 5
* *Inicio:* A = 10, B = 4
* *Paso 1:* C = A % B * 3 + B - 1
  * Modulo: 10 % 4 = 2
  * Multiplicación: 2 * 3 = 6
  * Suma y resta: 6 + 4 - 1 = 9
* *Resultado:* C = 9

### Ejercicio 6
* *Inicio:* A = 12, B = 5
* *Paso 1:* C = A / B + A % B * 2
  * División entera: 12 / 5 = 2
  * Modulo: 12 % 5 = 2
  * Multiplicación: 2 * 2 = 4
  * Suma final: 2 + 4 = 6
* *Resultado:* C = 6

### Ejercicio 7
* *Inicio:* A = 7, B = 3
* *Paso 1:* C = 7 * 2 + 3 % 2 = 14 + 1 = 15
* *Paso 2:* A = 7 + 3 * 3 - 15 / 2 = 7 + 9 - 7 = 9 (división entera 15/2 = 7)
* *Paso 3:* B = 15 % 3 + 9 / 2 = 0 + 4 = 4 (división entera 9/2 = 4)
* *Resultado:* A = 9, B = 4, C = 15

### Ejercicio 8
* *Inicio:* X = 8, Y = 2
* *Paso 1:* X += 2 * 3 $\rightarrow$ X = 8 + 6 = 14
* *Paso 2:* Y = 14 - 2 = 12
* *Resultado:* X = 14, Y = 12

### Ejercicio 9
* *Inicio:* X = 5
* *Paso 1:* En ++X * X--:
  * ++X incrementa X a 6 y evalúa como 6.
  * X-- evalúa con 6 y luego decrementa X a 5.
  * Y = 6 * 6 = 36.
* *Resultado:* X = 5, Y = 36

### Ejercicio 10
* *Inicio:* A = 7, B = 3
* *Paso 1:* En C = ++A + B--:
  * ++A incrementa A a 8 y evalúa como 8.
  * B-- evalúa como 3 y luego decrementa B a 2.
  * C = 8 + 3 = 11.
* *Resultado:* A = 8, B = 2, C = 11

## Ejercicios Adicionales: Condicionales Lógicos y Fórmulas Matemáticas

### Ejercicio A: Control de Ingreso a Evento (Uso de Operadores Lógicos)
*Enunciado:* Realizar un programa en C++ que permita el ingreso a un evento solo a personas mayores de edad y que tengan ticket VIP.

cpp
#include <iostream>
using namespace std;

int main()
{
    //codigo
    
    int edad;
    bool VIP,ingreso;
    
    // Lectura de datos
    cin >> edad >> VIP;
    
    // Evalúa si es mayor de edad (>=18) Y tiene ticket VIP (&&)
    bool ingreso = (edad >= 18) && VIP;
    
    cout << "Resultado de ingreso (1 = Permitido, 0 = Denegado): " << ingreso << endl;
    
    return 0;
}


---

### Ejercicio B: Mayor y Menor de dos números (Sin estructuras selectivas if/else)
*Enunciado:* Realizar un programa en C++ que permita identificar el número mayor y menor entre dos valores sin utilizar estructuras selectivas (usando fórmulas con valor absoluto).

cpp
#include <iostream>
using namespace std;

int main()
{
    //codigo
    
    double a, b;
    
    cin >> a >> b;
    
    // Aplicación de fórmulas matemáticas utilizando valor absoluto
    double mayor = (a + b + abs(a - b)) / 2;
    double menor = (a + b - abs(a - b)) / 2;
    
    cout << "mayor: " << mayor << endl;
    cout << "menor: " << menor << endl;
    
    return 0;
}


## Estructuras Selectivas (if / else)

### Ejercicio C: Determinación de Número Par o Impar
*Enunciado:* Realizar un algoritmo y programa en C++ que determine si un número entero ingresado es par o impar.

cpp
#include <iostream>
using namespace std;

int main() 
{
    //codigo
    
    int n;
    cout << "Ingrese un numero entero: ";
    cin >> n;

    if (n % 2 == 0) 
    {
        cout << "par" << endl;
    } else {
        cout << "impar" << endl;
    }

    return 0;
}


---

### Ejercicio D: Comparación de Dos Caracteres
*Enunciado:* Realizar un programa en C++ que permita diferenciar 2 caracteres ingresados por teclado.  
(Nota: C++ distingue entre mayúsculas y minúsculas, por lo que 'a' == 'A' dará como resultado "Diferente" y 'a' == 'a' dará "Igual").

cpp
#include <iostream>
using namespace std;

int main() 
{
    //codigo
    
    char C1, C2;
    cout << "Ingrese dos caracteres: ";
    cin >> C1 >> C2;

    if (C1 == C2) {
        cout << "iguales" << endl;
    } else {
        cout << "diferente" << endl;
    }

    return 0;
}
