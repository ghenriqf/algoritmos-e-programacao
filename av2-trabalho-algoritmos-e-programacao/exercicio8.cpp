#include <iostream>
using namespace std;

int main(){

    cout<< "            =-=-=-=-=-=-JOGO ADIVINHACAO COM COPOS-=-=-=-=-=-=" << endl;
    cout << "Dois jogadores se enfrentam um sera o Embaralhador e o outro, o Adivinhador." << endl;
    
    cout << "- Embaralhador: Indique a posicao inicial da moeda" << endl;
    cout << "COPOS:         U     U      U" << endl;
    cout << "______________________________" << endl;
    cout << "POSICAO:       a     b      c" << endl;

    cout << "1)A" << endl << "2)B" << endl << "3)C" << endl << "  -";

    int posicaoMoeda;
    cin >> posicaoMoeda;

    if(posicaoMoeda != 1 and posicaoMoeda != 2 and posicaoMoeda != 3){
        cout << "Escolha uma posicao valida!";
        return 1;
    }

    int copoA = 1;
    int copoB = 2;
    int copoC = 3;

    if(posicaoMoeda == 1){
        posicaoMoeda = copoA;
    }else if(posicaoMoeda == 2){
        posicaoMoeda = copoB;
    }else{
        posicaoMoeda = copoC;
    }
    
    cout << "- Embaralhador: Escolha quantos movimentos nos copos voce deseja fazer: ";

    int qtdMovimentos;
    cin >> qtdMovimentos;

    int opcEmbaralhamento;

    cout << "               U     U      U" << endl;
    for(int i = 1; i<=qtdMovimentos; i++){
        cout << "- Embaralhador: Escolha um das opcoes para mover os copos" << endl;
        cout << "1)Trocar a posicao entre os copos A e B." << endl;
        cout << "2)Trocar a posicao entre os copos B e C." << endl;
        cout << "3)Trocar a posicao entre os copos A e C." << endl;
        cin >> opcEmbaralhamento;

        if(opcEmbaralhamento == 1){
            int temp = copoA;
            copoA = copoB;
            copoB = temp;

            if(posicaoMoeda == copoA){
                posicaoMoeda = copoB;
            }else if(posicaoMoeda == copoB){
                posicaoMoeda = copoA;
            }
        }
        else if(opcEmbaralhamento == 2){
            int temp = copoB;
            copoB = copoC;
            copoC = temp;

            if(posicaoMoeda == copoB){
                posicaoMoeda = copoC;
            }else if(posicaoMoeda == copoC){
                posicaoMoeda = copoB;
            }
        }
        else if(opcEmbaralhamento == 3){
            int temp = copoA;
            copoA = copoC;
            copoC = temp;

            if(posicaoMoeda == copoA){
                posicaoMoeda = copoC;
            }else if(posicaoMoeda == copoC){
                posicaoMoeda = copoA;
            }
        } 
    }


    cout << "- Adivinhador: Indique onde voce acha que esta a moeda: " << endl;
    cout << "COPOS:         U     U      U" << endl;
    cout << "______________________________" << endl;
    cout << "POSICAO:       a     b      c" << endl;

    cout << "1)A" << endl << "2)B" << endl << "3)C" << endl << "  -";
    
    int escolha;
    cin >> escolha;

    if(escolha != 1 and escolha != 2 and escolha != 3){
        cout << "Indique um valor valido!";
        return 1;
    }

    if(escolha == 1){
        escolha = copoA;
    }else if(escolha == 2){
        escolha = copoB;
    }else{
        escolha = copoC;
    }

    if(escolha == posicaoMoeda){
        cout << "Parabens! O jogador ADIVINHADOR ganhou!";
    }else{
        cout << "Parabens! O jogador EMBARALHADOR ganhou!";
    }


    return 0;
}