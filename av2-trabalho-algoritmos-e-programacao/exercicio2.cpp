#include <iostream>
using namespace std;

int main(){

    int paisA = 5000000,paisB = 7000000;

    int anos = 0;

    while(paisA < paisB){

        paisA += paisA * 0.03;
        paisB += paisB * 0.02;

        anos++;
    }

    cout << "A populacao do pais A ultrapassou o B em " << anos << " anos";
    
    return 0; 
}