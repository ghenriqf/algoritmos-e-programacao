#include <iostream>
using namespace std;

int main(){
    int n,soma=0;

    cout << "Digite um valor n para seber se e um numero perfeito:";
    cin >> n;

    for(int i = 1; i<n; i++){
        if(n%i == 0){
            soma+=i;
        }
    }

    if(soma == n){
        cout << "O numero digitado e perfeito!";
    }else{
        cout << "O numero digitado nao e perfeito!";
    }


    return 0;
}