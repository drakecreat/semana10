/*
CO

#include <iostream>
using namespace std;

int main(){

int a = 0;
cout<<"ingrese un numero"<<endl;
cin>>a;
for(int i =1;i<=a;i++){

cout<<i<<"->"<<i*i;

}
return 0;
}


*/
//CODIGO CORREGIDO

#include <iostream>
using namespace std;

int main(){

int a = 0;
cout<<"ingrese un numero"<<endl;
cin>>a;
for(int i =1;i<=a;i++){

cout<<i<<"->"<<i*i<<endl;//agregue salto de linea porque la salida no era la que pedi el ejercicio sin embargo la logica y el resultado eran correctos, el error era solo de formato de salida  

}
return 0;
}
