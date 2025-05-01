#include <iostream>
using namespace std;

int main(){

    double eucalipto = 1.10, palmera = 1.50;
    double anos;

    while(eucalipto <= palmera){
        eucalipto += 0.03;
        palmera += 0.02;
        anos+=1;
    }

    cout << "Demorara " << anos << " para o pe de eucalipto ser maior que de uma palmera";

    return 0;

}
