#include <iostream>
using namespace std;


int a();
int b();
int c();
int d();

int main(){

    a();
    b();
    c();
    


    return 0;
}


int a(){

    int matriz[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int k = 2;

    cout << "A)" << endl;
    cout << "Os valores da matriz divisiveis pelo valor k sao: " << endl;
    cout << "k = " << k << endl;

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
           if(matriz[i][j] % k == 0){
            cout << matriz[i][j] << " ";
           } 
        }

    
    }

    cout << endl;

    return 0;
}

int b(){

    int x[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int somaLinha = 0;

    cout << "B)" << endl;

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            somaLinha = somaLinha + x[i][j];
        }
        cout << "Soma linha " << i << " = " << somaLinha << endl;
        somaLinha = 0;
        
    }

    return 0;
}

int c(){

    int x[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int soma = 0;

    cout << "C)" << endl;

    for(int j = 0; j<3; j++){
        soma = 0;
        for(int i = 0; i<3; i++){
            soma+= x[i][j];
        }
        cout << "A soma da coluna " << j << " e de " << soma << endl;
          
    }

    

    return 0;
}