#include <iostream>
using namespace std;

int main(){

    int x,i=1,soma=0;
    double valor;

    cout << "Calculo da media de x valores" << endl;
    cout << "  - Digite o valor para x: ";
    cin >> x;

    while(i<=x){
        cout << "Digite o valor " << i << ":";
        cin >> valor;
        soma+=x;
        i++;
    }

    cout << "A media e de: " << soma/x; 

    return 0;
}