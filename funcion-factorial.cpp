#include <iostream>

using namespace std;


int facto(int n){ 
    int resultado = 1; 
    if(n == 0) {
        resultado = 1;
    } else {
        for(int i = 1; i <= n; i++) {
            resultado = resultado *i; 
        }
    }
    return resultado;
}

int main(){

    int n;

    cout << "\n||Calculo de factorial utilizando funciones||\n";

    cout << "\nIngrese un numero entero: ";
    cin>> n;

    cout << "\nEl factorial de "<< n<< " es "<<facto(n)<<"\n";


    return 0; 
}

