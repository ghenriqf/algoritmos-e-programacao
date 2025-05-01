#include <iostream>
using namespace std;

int main(){

    int n,menor,valor;

    cout << "-=-=-=-=DETERMINADOR DE MENOR VALOR-=-=-=-=" << endl;
    cout << "Quantos valores voce deseja? ";
    cin >> n;

    for(int i=1; i<=n; i++){
        cout << i << " valor: ";
        cin >> valor;

        if(i == 1){
            menor = valor;
            
        }else{
            if(valor < menor){
                menor = valor;
            }
        }
    }

    cout << "O menor valor fornecido e " << menor;
    

    return 0;
}