#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    double promedio;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    promedio = (num1 + num2 + num3) / 3.0;

    cout << "El promedio es: " << promedio << endl;

    return 0;
}

/*
Big O: O(1)
Justificacion:
El tiempo de ejecución es constante, ya que el programa realiza un número fijo de operaciones 
independientemente del tamaño de la entrada. En este caso, el programa siempre realiza 3 lecturas 
de números y 1 operación de suma y división para calcular el promedio, sin importar los valores ingresados.
*/