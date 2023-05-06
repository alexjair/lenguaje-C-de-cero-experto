#include<iostream>

using namespace std;

int main(){

    int edad = 5;
    int *pedad = &edad;
    
    double num = 5.51;
    double *pnum = &num;
    
    char letra = 'z';
    char *pletra = &letra;

    cout << pedad <<  endl;
    cout << pnum <<  endl;
    cout << pletra <<  endl;

    cout << *pedad <<  endl;
    cout << *pnum <<  endl;
    cout << *pletra <<  endl;
        
    return 0;
}