#include <stdio.h>

int main() {
    char operador;
    float num1, num2, resultado;

    printf("Digite uma operacao (+, -, *, /): ");
    scanf("%c", &operador);

    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);

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
                printf("Erro! Divisao por zero.\n");
                return 1;
            }
            break;
        default:
            printf("Operador invalido!\n");
            return 1;
    }

    printf("Resultado: %.2f\n", resultado);

    return 0;
}
