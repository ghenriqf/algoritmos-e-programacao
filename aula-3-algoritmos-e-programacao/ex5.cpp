#include <iostream>
using namespace std;

int main()
{
    int tempEmCelsius;
    cout<< "Temperatura em celsius: ";
    cin>> tempEmCelsius;

    int tempEmFahrenheit = (tempEmCelsius * 1.8) + 32;
    cout << tempEmCelsius<< "C e igual a "<<tempEmFahrenheit<<"F";

    return 0;
}