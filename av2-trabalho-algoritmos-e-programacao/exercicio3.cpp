#include <iostream>
using namespace std;

int main(){
    double n;
    int qtd = 0;

    cout << "Forneca um valor n: ";
    cin >> n;

    while(n != 0){
        if(n>=100){
            qtd = int(n / 100);
            n -= qtd *100;
            cout << "Foram necessario " << qtd << " cedulas de 100" << endl;
        }
        else if(n>=50){
            qtd = int(n / 50);
            n -= qtd *50;
            cout << "Foram necessario " << qtd << " cedulas de 50" << endl;
        }
        else if(n>=20){
            qtd = int(n / 20);
            n -= qtd *20;
            cout << "Foram necessario " << qtd << " cedulas de 20" << endl;
        }
        else if(n>=10){
            qtd = int(n / 10);
            n -= qtd *10;
            cout << "Foram necessario " << qtd << " cedulas de 10" << endl;
        }
        else if(n>=5){
            qtd = int(n / 5);
            n -= qtd *5;
            cout << "Foram necessario " << qtd << " cedulas de 5" << endl;
        }
        else if(n>=2){
            qtd = int(n / 2);
            n -= qtd *2;
            cout << "Foram necessario " << qtd << " cedulas de 2" << endl;
        }
        else if(n>=1){
            qtd = int(n / 1);
            n -= qtd *1;
            cout << "Foram necessario " << qtd << " cedulas de 1" << endl;
        }
        else if(n>=0.50){
            qtd = int(n / 0.50);
            n -= qtd *0.50;
            cout << "Foram necessario " << qtd << " moedas de 50 centavos" << endl;
        }
        else if(n>=0.25){
            qtd = int(n / 0.25);
            n -= qtd *0.25;
            cout << "Foram necessario " << qtd << " moedas de 25 centavos" << endl;
        }
        else if(n>=0.10){
            qtd = int(n / 0.10);
            n -= qtd *0.10;
            cout << "Foram necessario " << qtd << " moedas de 10 centavos" << endl;
        }
        else if(n>=0.05){
            qtd = int(n / 0.05);
            n -= qtd *0.05;
            cout << "Foram necessario " << qtd << " moedas de 5 centavos" << endl;
        }
        else if(n>=0.01){
            qtd = int(n * 100 + 0.01);
            n -= qtd *0.01;
            cout << "Foram necessario " << qtd << " moedas de 1 centavos" << endl;
        }else{
            return 1;
        }
    }
    return 0;
}