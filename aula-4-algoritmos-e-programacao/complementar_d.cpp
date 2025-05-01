#include <iostream>
using namespace std;

int main(){
    const double VALORINGRESSO = 19.70;
    double ingressoDesconto;
    int idade;

    cout << "Digite a sua idade:";
    cin >> idade;

    if (idade<60){
        char esdudante;
        cout << "Voce e estudante?(S/N)";
        if (esdudante == 'S'){
            ingressoDesconto = VALORINGRESSO - (VALORINGRESSO * 0.50);
            cout << "O valor do seu ingresso e de " << ingressoDesconto << endl;
        }
        else if(esdudante == 'N'){
            cout << "O valor do seu ingresso e de " << VALORINGRESSO << endl;
        }

        

    }
}