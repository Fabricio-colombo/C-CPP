#include <stdio.h>

int main() {
    int n, i;
    float num, soma = 0, media;

    printf("Quantos números você deseja inserir? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%f", &num);
        soma += num;
    }

    media = soma / n;
    printf("A média dos %d números é: %.2f\n", n, media);

    return 0;
}
