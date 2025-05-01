#include <iostream>
using namespace std;

int main()
{
    double M1, M2, M3, media;
    cout << "Digite a M1: " << endl;
    cin >> M1;
    cout << "Digite a M2: " << endl;
    cin >> M2;
    cout << "Digite a M3: " << endl;
    cin >> M3;
    media = (M1 + M2 + M3) / 3;
    cout << "sua média é " << media << endl;
    if (media >= 6)
    {
        cout << "você está aprovado" << endl;
    }
    else
    {
        cout << "você está reprovado" << endl;
    }
}