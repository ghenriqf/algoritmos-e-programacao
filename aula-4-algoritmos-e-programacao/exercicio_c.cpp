#include <iostream>
using namespace std;

int main()
{
    int idade;
    cout << "Digite a sua idade: " << endl;
    cin >> idade;
    if (idade >= 18)
    {
        cout << "você é adulto" << endl;
    }
    else
    {
        cout << "você não é adulto" << endl;
    }
}