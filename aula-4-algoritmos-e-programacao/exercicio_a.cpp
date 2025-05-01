#include <iostream>
using namespace std;

int main()
{
    // 1. Obtenha um número
    // 2. Teste se o numero é maior que 0
    // 3. Se o numero for maior que zero, então imprima que ele é positivo
    // 3. Caso contrário, imprima que ele é negativo
    int numero;
    cout << "Digite um número: " << endl;
    cin >> numero;
    if (numero > 0)
    {
        cout << numero << " é positivo" << endl;
    }
    else if (numero < 0)
    {
        cout << numero << " é negativo" << endl;
    }
    else
    {
        cout << numero << " é neutro" << endl;
    }
}