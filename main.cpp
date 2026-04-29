#include <iostream>
using namespace std;

// EXERCÍCIO 1 - MATEMATICA
class Matematica
{
public:
    int a, b;

    void entrada()
    {
        cout << "Digite o valor de A: ";
        cin >> a;

        cout << "Digite o valor de B: ";
        cin >> b;
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

// EXERCÍCIO 2 - TRIANGULO
class Triangulo
{
public:
    float a, b, c;
    // private float PI;

    Triangulo()
    {
        this->a = 1;
        this->b = 1;
        this->c = 1;
    }

    Triangulo(float a, float b, float c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        // this->PI = 3.14159;
    }

    bool verificaTriangulo()
    {
        return (a < b + c && b < a + c && c < a + b);
    }

    void tipoTriangulo()
    {
        if (!verificaTriangulo())
        {
            cout << "Nao é triangulo\n";
            return;
        }

        if (a == b && b == c)
            cout << "Triangulo Equilatero\n";
        else if (a == b || a == c || b == c)
            cout << "Triangulo Isosceles\n";
        else
            cout << "Triangulo Escaleno\n";
    }
};

// EXERCÍCIO 3 - ESTACIONAMENTO
class Estacionamento
{
public:
    int dia, horaEntrada, horaSaida;

    void entrada()
    {
        cout << "Digite o dia: ";
        cin >> dia;

        cout << "Digite a hora de entrada: ";
        cin >> horaEntrada;

        cout << "Digite a hora de saida: ";
        cin >> horaSaida;
    }

    float calcularValor()
    {
        int horas = horaSaida - horaEntrada;

        if (horas <= 0)
        {
            cout << "Erro no horario\n";
            return 0;
        }

        return horas * 5;
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

            Matematica matematica1;
            matematica1.entrada();

            cout << "Soma: " << matematica1.soma();
            cout << "\nSubtracao: " << matematica1.subtracao();
            cout << "\nMultiplicacao: " << matematica1.multiplicacao();
            cout << "\nDivisao: " << matematica1.divisao();
            break;
        }

        case 2:
        {
            float a, b, c;
            cout << "Digite os lados: ";
            cin >> a >> b >> c;

            Triangulo triangulo1(a, b, c);

            triangulo1.tipoTriangulo();
            break;
        }

        case 3:
        {

            Estacionamento estacionamento1;
            estacionamento1.entrada();

            cout
                << "Valor a pagar: R$ " << estacionamento1.calcularValor();
            ;
            break;
        }

        case 0:
            cout << "Saindo...\n";
        default:
            break;

            cout << "Opcao invalida!\n";
        }

    } while (op != 0);

    return 0;
}