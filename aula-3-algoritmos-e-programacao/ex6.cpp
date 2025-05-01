#include <iostream>
using namespace std;

int main()
{
    const double PI = 3.14;
    double raio;
    cout << "Raio da esfera: ";
    cin >> raio;

    double volume = (4.0/3.0)*PI*(raio*raio*raio);
    cout << "O volume da esfera vale "<< volume;

    return 0;
}