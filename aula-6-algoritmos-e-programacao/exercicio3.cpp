#include <iostream>
using namespace std;

int main(){
    int idade;
    cout << "Digite a sua idade:";
    cin >> idade;

    string doencaBeneficio;
    cout << "Voce tem alguma doenca que te da acesso ao beneficio";
    cin >> doencaBeneficio;

    if(idade<=65 or doencaBeneficio == "sim" ){
        cout << "Voce tem direito ao beneficio" << endl;
    }else{
        cout << "Voce nao tem direito ao beneficio";
    }

    return 0;
}