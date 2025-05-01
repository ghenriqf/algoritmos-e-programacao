#include <iostream>
using namespace std;

int main(){

    int potencia,base,numero;

    cout << "Digite um valor para saber a sua potencia: ";
    cin >> base;
    numero = base;

    cout << "Digite a potencia: ";
    cin >> potencia;

    for(int i=1; i<=potencia-1; i++){
        base = numero *base;
    }

    cout << "O resultado da potencia e de " << base;

    
    return 0;
}