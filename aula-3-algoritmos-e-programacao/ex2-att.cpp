#include <iostream>
using namespace std;

int main()
{
    double baseMenor;
    cout<< "Base menor: ";
    cin >> baseMenor;

    double baseMaior;
    cout << "Base maior: ";
    cin >> baseMaior;

    double altura;
    cout<< "Altura: ";
    cin >> altura;

    double areaDoTrapezio;
    areaDoTrapezio = (baseMenor + baseMaior)*altura /2;
    cout << "A area do trapezio vale: " << areaDoTrapezio<< endl;

    return 0;

}