#include <iostream>
#include <ctime>
using namespace std;

int main() {    
  srand(time(0));
  int numeroSecreto = rand() % 100 + 1;
  
  int n;

  while(n != numeroSecreto){
    cout << "Digite um valor para tentar adivinhar o numero secreto: " << endl;
    cin >> n;

    if(n < numeroSecreto){
        cout << "O numero secreto e maior!" << endl;
    }else if (n > numeroSecreto){
        cout << "O numero secreto e menor!" << endl;
    }
    }
    
    cout << "Parabens, voce descobriu o numero secreto!" << endl;

    return 0;
}