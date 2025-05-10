#include <iostream>
using namespace std;

int main(){

    int a,b, soma = 0;
    
    cout << "Digite os valores para um intervalo [a,b]: " << endl;
    cin >> a >> b; 

    if(a<= 1 or b<=1){
        cout << "Um numero primo e um numero inteiro maior que 1";
        return 1;
    }

    for(int min = a; min<=b; min++){
        if(min == 2){
            soma+=min;
        }
        else{
            for(int i = 2; i<= min-1; i++){
                if(min%i == 0){
                    i = min-1;
                }else{
                    if(i == min-1){
                        soma+=min;
                    }
                }
        
            }
        }
    }
    
    cout << "A soma dos numeros primos do intervalo [" << a << "," << b << "]" << " e de " << soma;
    
    return 0;
}
