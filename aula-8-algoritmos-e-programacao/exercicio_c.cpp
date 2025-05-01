#include <iostream>
using namespace std;

int main(){

    int n, i=0;
    cout << "Digite um valor para descobrir o seu fatorial: ";
    cin >> n;

    int fatorial = 0;
    int antecessor= n;
    while(i<=n){
        antecessor-=1;
        fatorial = fatorial + n * antecessor;
        i++;
    }
    
    cout << n << "!" << "= " << fatorial;

    return 0; 
}