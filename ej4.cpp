#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main() {

    int numero;
    int contador = 0;

    cout << "Digite un numero: " << endl;
    cin >> numero;

    while (numero >= 2) {
        
        cout << numero << " / 2 = " << numero / 2 << endl;

        numero = numero / 2;
        contador++;
    }

    cout << "Se realizo la division " << contador << " veces" << endl;

    return 0;
}
/*
big O: O(log n)
Justificacion:
El tiempo de ejecución es logarítmico, ya que el programa divide el número ingresado por 2 en cada iteración del bucle while.
En el peor de los casos, si se ingresa un número 'n', el programa realizará aproximadamente log2(n) divisiones antes de que 
el número sea menor que 2, lo que resulta en un tiempo de ejecución proporcional al logaritmo del número ingresado. 
Osea que a medida que el número ingresado aumenta, el número de divisiones necesarias crece de manera logarítmica, lo que hace que el programa sea eficiente incluso para números grandes.    

*/