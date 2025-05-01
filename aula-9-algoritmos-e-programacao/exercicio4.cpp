#include <iostream>
using namespace std;

int main(){

    double k,soma,valor;
    
    cout << "-=-=-=-=-=-=-=CALCULADORA DE MEDIA-=-=-=-=-=-=" << endl;
    cout << "Digite a quantidade de numeros: ";
    cin >> k;

    for(int i=1; i<=k; i++){
        cout << "Valor " << i << ":";
        cin >> valor;

        soma+=valor;
    }

    cout << "A media dos valores fornecidos e de " << soma/k;

    return 0;
}