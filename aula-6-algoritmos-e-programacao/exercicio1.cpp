#include <iostream>
using namespace std;

int main(){
    int idade;
    cout << "Digite a sua idade: ";
    cin >> idade;

    if(idade<16){
        cout<< "Menores de 16 anos nao podem votar."<< endl;
    }else if(idade<=16 && idade<=17){
        cout << "De 16 a 17 anos o voto e facutativo." << endl;
    }else if(idade>=18 && idade<=69){
        cout << "De 18 a 69 anos o voto e obrigatorio." << endl;
    }else{
        cout << "Apartir de 70 anos o voto e facutativo.";
    }
    
    return 0;
}   
