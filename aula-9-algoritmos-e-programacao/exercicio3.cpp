#include <iostream>
using namespace std;

int main(){
    int numeroPessoas,numeroAdultos=0,idade;

    cout << "Quantas pessoas voce quer verificar se e adulto? ";
    cin >> numeroPessoas;

    for(int i=1; i<=numeroPessoas; i++){
        cout << "Pessoa " << i << ":";
        cin >> idade;

        if(idade>= 18){
            numeroAdultos++;
        } 
    }
    cout << "A quantidade de adultos e igual " << numeroAdultos;

    return 0;
}