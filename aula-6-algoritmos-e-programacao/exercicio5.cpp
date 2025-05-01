#include <iostream>
using namespace std;

int main(){
    int idade;
    cout << "Digite a sua idade:";
    cin >> idade;

    string nacionalidade;
    cout << "Qual e a sua nacionalidade? ";
    cin >> nacionalidade;

    char sexo;
    cout << "Qual e o seu sexo? (m/f) ";
    cin >> sexo;

    if(idade>= 18 and nacionalidade == "brasileira" and sexo == 'm'){
        cout << "Voce e obrigado a se alistar no exercito brasileiro!";
    }else{
        cout << "Voce nao e obrigado a se alistar!";
    }

    return 0;
}