#include <iostream>
using namespace std;

int main()
{
    double numero1, numero2;
    cout << "Digite o número 1 " << endl;
    cin >> numero1;
    cout << "Digite o número 2 " << endl;
    cin >> numero2;
    if (numero1 > numero2)
    {
        cout << numero1 << " é maior que " << numero2 << endl;
    }
    else if (numero2 > numero1)
    {
        cout << numero2 << " é maior que " << numero1 << endl;
    }
    else
    {
        cout << numero1 << " é igual a " << numero2 << endl;
    }
}