#include <iostream>

int main() {
    int n;
    float num, soma = 0, media;

    std::cout << "Quantos números você deseja inserir? ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cout << "Digite o número " << i + 1 << ": ";
        std::cin >> num;
        soma += num;
    }

    media = soma / n;
    std::cout << "A média dos " << n << " números é: " << media << std::endl;

    return 0;
}
