#include <iostream>
using namespace std;

int main(){

    double maiorSalario;
    double tempSalario;
    int numeroPessoas;

    cout << "Digite a quantidade de pessoas para verificar o maior salario dentre elas: ";
    cin >> numeroPessoas;

    for(int i = 1 ; i<=numeroPessoas; i++){
        cout << "Digite o salario da " << i << " pessoa: ";
        cin >> tempSalario;
        if(i == 1){
            maiorSalario = tempSalario;
        }else if(maiorSalario < tempSalario){
                maiorSalario = tempSalario;
            }
        }

    cout << "O maior salario coletado foi de R$" << maiorSalario;

    return 0;
}