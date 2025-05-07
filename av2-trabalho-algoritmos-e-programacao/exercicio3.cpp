#include <iostream>
using namespace std;

int main(){

    double valor;
    int qntCedulas;


    cout << "Digite o valor para ser decomposto: ";
    cin >> valor;

    while(valor != 0){
        if(valor > 100){
            qntCedulas = int(valor / 100);
            valor -= qntCedulas;
        }

    }


    cout << valor;
    
    return 0;
}