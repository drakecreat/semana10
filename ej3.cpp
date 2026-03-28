# include <iostream>
# include <array> 
# include <vector>
using namespace std;

int main() {
    cout << "Cuantos numeros va a ingresar" << endl;
    int cantidad;
    cin >> cantidad;

    vector <int> nums(cantidad); 

    for (int i = 0; i < cantidad; i++) {
        cout << "Ingrese numero " << i + 1 << ": ";
        cin >> nums[i]; 
        }

    cout << "Parejas:" << endl;
    for (int i = 0; i < cantidad; i++) {
        
        for (int j = 0; j < cantidad; j++) {
            if (j != i){
            cout << "(" <<nums[i] << " , " << nums[j] << ")" << endl;
        }     
    }
    }
return 0;
}
/*
big O: O(n^2)
Justificacion:  
El tiempo de ejecución es cuadrático, ya que el programa utiliza dos bucles anidados 
para generar todas las parejas posibles de números ingresados.
*/
