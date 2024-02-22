#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    char operador;
    float num1, num2, resultado;

    cout << "Digite uma operacao (+, -, *, /): ";
    cin >> operador;

    cout << "Digite dois numeros: ";
    cin >> num1 >> num2;

    switch (operador) {
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
            if (num2 != 0)
                resultado = num1 / num2;
            else {
                cout << "Erro! Divisao por zero." << endl;
                return 1;
            }
            break;
        default:
            cout << "Operador invalido!" << endl;
            return 1;
    }

    cout << "Resultado: " << resultado << endl;

    system("pause");

    return 0;
}
