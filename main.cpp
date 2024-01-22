#include <iostream>

using namespace std;

int main ()
{
    
    double num1, num2, resultado;
    char operador;
    bool executar = true;
    char escolha;

    do
    {
        system ("cls");

        cout <<"CALCULADORA CONVENCIAONAL SIMPLES C++: "<<endl;
        cout <<""<<endl;
        cout <<"INFORME A OPERACAO ( +:SOMA, -:SUBTRACAO, *:MULTIPLICACAO, /:DIVISAO ): ";
        cin >> operador;
        cout <<"DIGITE O PRIMEIRO NUMERO: ";
        cin >> num1;
        cout <<"DIGITE O SEGUNDO NUMERO: ";
        cin >> num2;

        switch (operador)
        {
            
            case '+':
            resultado = num1 + num2;
            break;

            case '-':
            resultado = num1 - num2;
            break;

            case '*':
            resultado = num1 * num2;
            break;

            case '/':
            resultado = num1 / num2;
            break;
            
            default:
            cout <<"OPERADOR RUIM..."<<endl;
            break;

        }

        cout <<"RESULTADO: "<< resultado <<endl;
        cout <<""<<endl;
        cout <<"DESEJA EXECUTAR OUTRA OPERACAO? (S-SIM) (N-NAO): ";
        cin >> escolha;

        if (escolha == 's')
        {
            executar = true;
        }else
        {
            executar = false;
        }


    } while (executar);
    


    return 0;
}
