//CODIGO DE PRUEBA 

#include <iostream>
using namespace std;

int main() {
    int A = 0;
    int B = 0;

    cout << "Ingrese un numero entero" << endl;
    cin >> A;
    cout << "Ingrese otro numero entero" << endl;
    cin >> B;

    float suma, resta, multi;

    suma = A + B;
    resta = A - B;
    multi = A * B;

    cout << "la suma de A= "<<A<<" mas B= "<<B<<" es: " << suma<<endl;
    cout << "la resta de A= "<<A<<" menos B= "<<B<<" es: " << resta<<endl;
    cout << "la multiplicacion de A= "<<A<<" por B= "<<B<<" es: " << multi<<endl;

    return 0;
}
//no me equivoque esta igual que en la hoja de la prueba
