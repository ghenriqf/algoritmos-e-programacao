#include <iostream>
using namespace std;

int main()
{

    int escolha;
    string texto1 =
        "Voce esta em uma floresta misteriosa.\n"
        "O que voce deseja fazer?\n"
        "1 - Explorar floresta\n"
        "2 - Acender uma fogueira\n"
        "3 - Procurar um caminho";

    cout << texto1 << endl;
    cin >> escolha;

    if (escolha == 1)
    {
        string texto2 =
            "Voce comeca a explorar a floresta e encontra uma caverna.\n"
            "Voce deseja explorar a caverna?\n"
            "1 - sim\n"
            "2 - nao";

        cout << texto2 << endl;
        cin >> escolha;

        if (escolha == 1)
        {
            cout << "voce entra na caverna e encontra um tesouro perdido!" << endl;
        }
        else if (escolha == 2)
        {
            cout << "voce decide nao entrar na caverna e volta para o acampamento " << endl;
        }
        else
        {
            cout << "opcao invalida! " << endl;
        }
    }
    else if (escolha == 2)
    {
        string texto3 =
            "Você acende uma fogueira e se sente mais seguro.\n"
            "Enquanto a fogueira está queimando, você ouve barulhos ao longe.\n"
            "Você deseja investigar o barulho?\n"
            "1. Sim\n"
            "2. Não";

        cout << texto3 << endl;
        cin >> escolha;

        if (escolha == 1)
        {
            cout << "Você investiga o barulho e encontra um grupo de viajantes perdidos que precisam de ajuda." << endl;
        }
        else if (escolha == 2)
        {
            cout << "Você decide ignorar o barulho e descansar ao redor da fogueira." << endl;
        }
        else
        {
            cout << "Escolha inválida!" << endl;
        }
    }
    else if (escolha == 3)
    {
        string text4 =
            "Você procura por um caminho e encontra uma trilha que leva a uma clareira.\n"
            "Na clareira, você vê um grupo de animais selvagens.\n"
            "Você deseja se aproximar dos animais?\n"
            "1. Sim\n"
            "2. Não";
        cout << text4 << endl;
        cin >> escolha;

        if (escolha == 1)
        {
            cout << "Você se aproxima dos animais e descobre que eles são amistosos e não representam perigo." << endl;
        }
        else if (escolha == 2)
        {
            cout << "Você decide manter distância e volta para a floresta." << endl;
        }
        else
        {
            cout << "Escolha inválida!" << endl;
        }
    }
    else
    {
        cout << "opcao invalida! " << endl;
    }

    cout << "obrigado por jogar! ";
}
