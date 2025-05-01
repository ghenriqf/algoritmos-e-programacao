#include <iostream>
using namespace std;

int main()
{
    double primeiroValor;
    double segundoValor;

    cout<< "Digite o primeiro valor: ";
    cin >> primeiroValor;

    cout << "Digite o segundo valor: ";
    cin >> segundoValor;

    double somaDosValores =primeiroValor + segundoValor;
    cout << "A soma dos valores: "<< somaDosValores<< endl;

    double subtracaoDosValores = primeiroValor - segundoValor;
    cout << "A subtracao dos valores: "<< subtracaoDosValores<< endl;

    double multiplicacaoDosValores = primeiroValor * segundoValor;
    cout << "A multiplicacao dos valores: "<< multiplicacaoDosValores<< endl;

    double divisaoDosValores = primeiroValor / segundoValor;
    cout << "A divisao dos valores: "<< divisaoDosValores<< endl;

    return 0;
} 