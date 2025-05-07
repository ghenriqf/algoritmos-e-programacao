#include <iostream>
using namespace std;

int main(){
    int n, soma = 0;

    cout << "Digite um valor x: ";
    cin >> n;

    while(n>0){
        soma += n % 10;
        n = n / 10;        
    }
    
    cout << "A soma dos valores que compoem X e de " << soma;

    return 0;
}