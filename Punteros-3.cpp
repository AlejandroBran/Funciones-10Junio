#include <iostream>

using namespace std;

int main(int argc,char *argv[]){
    
    int x ;
    int *apuntador = &x; 
    cout << "\nIngrese un numero entero: ";
    cin >> *apuntador;

    delete [] apuntador;
    apuntador = NULL;

    cout << "\nUsted ingreso el numero: "<<x << "\n";
    cout << "\nUsted ingreso el numero: "<<&apuntador<<"\n";
    cout << "\nUsted ingreso el numero: "<<*apuntador<<"\n";

    return 0;
}