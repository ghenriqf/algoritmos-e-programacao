#include <iostream>
using namespace std;

int main(){
    double media;
    int faltas;

    cout << "Dgite a sua media:";
    cin >> media;

    cout << "Digite a suas faltas:";
    cin >> faltas;

    if(media>=7 and faltas<10){
        cout << "Voce esta aprovado!" << endl;
    }else if (media <= 5 and media>7 and faltas<10){
        cout << "Voce esta em recuperacao!" << endl;
    }else{
        cout << "Voce esta reprovado!";
    }

    return 0;
}