#include <iostream>
using namespace std;

int main(){
    int idade;
    cout << "Digite a sua idade: ";
    cin >> idade;

    string sabeLer;
    cout << "Sabe ler? ";
    cin >> sabeLer;

    string sabeEscrever;
    cout << "Sabe escrever? ";
    cin >> sabeEscrever;

    string temCpf;
    cout << "Tem cpf? ";
    cin >> temCpf;

    if(idade>=18 and sabeLer == "sim" and sabeEscrever == "sim" and temCpf == "sim"){
        cout << "Voce esta apito a tirar a sua CNH!";
    }else{
        cout << "Voce nao esta apito a tirar a sua CNH!";
    }

    return 0;
    
}