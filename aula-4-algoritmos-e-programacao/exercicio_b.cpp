#include <iostream>
using namespace std;

int main()
{
    int numero;
    cout << "Digite um número: " << endl;
    cin >> numero;
    if (numero % 2 == 0)
    {
        cout << numero << " é par" << endl;
    }
    else
    {
        cout << numero << " é ímpar" << endl;
    }
}