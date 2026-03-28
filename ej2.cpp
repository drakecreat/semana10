#include <iostream>
using namespace std;

int main() {
    int numero, mayor, menor,cantidad;
    cout << "Cuantos numeros vas a ingresar: ";
    cin >> cantidad;

    if (cantidad <= 0) {
        cout << "La cantidad debe ser mayor que 0." << endl;
        return 0;
    }  
    mayor = menor = 0;

    for (int i = 1; i <= cantidad; ++i) {
        cout << "Ingresa el numero " << i << ": ";
        cin >> numero;

        if (numero > mayor) mayor = numero;
        if (numero < menor) menor = numero;
    }

    cout << "El mayor es: " << mayor << endl;
    cout << "El menor es: " << menor << endl;

    return 0;
}

/*
BIG O: O(n)
Justificacion:
El tiempo de ejecución es lineal, ya que el programa necesita iterar a 
través de todos los números ingresados para determinar el mayor y el menor.
En el peor de los casos, si se ingresan 'n' números, el programa realizará 'n' 
comparaciones para encontrar el mayor y 'n' comparaciones para encontrar el menor,
lo que resulta en un tiempo de ejecución proporcional a la cantidad de números ingresados.
*/