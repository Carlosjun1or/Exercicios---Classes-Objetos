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

// EXERCÍCIO 2 - TRIANGULO
class Triangulo
{
public:
    float a, b, c;

    Triangulo(float a, float b, float c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
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

    Estacionamento(int dia, int horaEntrada, int horaSaida)
    {
        this->dia = dia;
        this->horaEntrada = horaEntrada;
        this->horaSaida = horaSaida;
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
            int dia, horaEntrada, horaSaida;
            cout << "Digite o dia, hora de entrada e hora de saida: ";
            cin >> dia >> horaEntrada >> horaSaida;

            Estacionamento estacionamento1(dia, horaEntrada, horaSaida);
            
            cout << "Valor a pagar: R$ " << estacionamento1.calcularValor() << endl;
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