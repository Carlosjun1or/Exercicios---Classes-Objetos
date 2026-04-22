#include <iostream>
using namespace std;

// EXERCÍCIO 1 - MATEMATICA
class Matematica
{
public:
    int a, b;

    Matematica(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    int soma()
    {
        return a + b;
    }
    int subtracao()
    {
        return a - b;
    }
    int multiplicacao()
    {
        return a * b;
    }

    float divisao()
    {
        if (b != 0)
        {
            return (float)a / b;
        }
        cout << "Erro: divisao por zero!\n";
        return 0;
    }
};

// MAIN
int main()
{
    int op;

    do
    {
        cout << "\n=== MENU ===\n";
        cout << "1 - Matematica\n";
        cout << "2 - Triangulo\n";
        cout << "3 - Estacionamento\n";
        cout << "0 - Sair\n";
        cout << "Escolha: ";
        cin >> op;

        switch (op)
        {

        case 1:
        {
            int a, b;
            cout << "Digite o valor de A e B: ";
            cin >> a >> b;

            Matematica m(a, b);

            cout << "Soma: " << m.soma() << endl;
            cout << "Subtracao: " << m.subtracao() << endl;
            cout << "Multiplicacao: " << m.multiplicacao() << endl;
            cout << "Divisao: " << m.divisao() << endl;
            break;
        }

        case 0:
            cout << "Saindo...\n";
            break;

        default:
            cout << "Opcao invalida!\n";
        }

    } while (op != 0);

    return 0;
}