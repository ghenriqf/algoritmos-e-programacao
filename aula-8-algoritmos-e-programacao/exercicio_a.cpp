#include <iostream>
using namespace std;

int main(){

    int x,y,soma=0;
    cout << "Digite o valor inferior do intervalo: ";
    cin >> x;

    cout << "Digite o valor superior do intervalo: ";
    cin >> y;

    do{
        if(x % 2 == 0){
            soma+=x;
        }

        x+=1;
    }while(x<=y);

    cout << "A somas dos pares do intervalo e igual a " << soma;

}