#include<iostream>
#include<cmath>

using namespace std;

int main(){

    const double num = 3.1415;
    string nombre;

    cout << num <<  endl;
    cout << "Ingrese Numero" << endl;
    getline(cin, nombre);

    cout << "Su nombre es: " << nombre << endl;
        
    return 0;
}