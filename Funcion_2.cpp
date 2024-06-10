#include <iostream>

using namespace std;

int facto(int n) { 
    int resultado = 1; 
    if (n == 0) {
        resultado = 1;
    } else {
         
        resultado = n*facto(n-1);
    }
    return resultado;
}

int main() {
    int n;

    cout << "\n||Calculo de factorial utilizando funciones||\n";

    cout << "\nIngrese un numero entero: ";
    cin >> n;

    cout << "\nEl factorial de " << n << " es " << facto(n) << "\n";

    return 0;
}