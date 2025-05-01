#include <iostream>
using namespace std;

int main()
{
    string nome;
    cout << "Dite seu nome: ";
    cin >> nome;

    string localDeNascimento;
    cout << "Digite o seu local de nascimento: ";
    cin >> localDeNascimento;

    string docePreferido;
    cout << "Qual e seu doce preferido? ";
    cin >> docePreferido;

    cout << "Seu nome e "<< nome << " voce nasceu em "<< localDeNascimento << " e seu doce preferido e "<< docePreferido;

    return 0;
}