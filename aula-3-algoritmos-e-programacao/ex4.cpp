#include <iostream>
using namespace std;

int main()
{
    double m1;
    double m2;
    double m3;

    cout<< "Digite a sua m1: ";
    cin>> m1;

    cout<< "Digite a sua m2: ";
    cin>> m2;

    cout<< "Digite a sua m3: ";
    cin>> m3;

    double mf = (m1 + m2 + m3)/3;

    cout<< "A sua media final e de "<< mf<< endl;

    return 0;

}