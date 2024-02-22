#include <iostream>
#include <stdlib.h>

int main() {

    std::wcout.imbue(std::locale("en_US.UTF-8"));
    int numero;
    std::cout << "Digite um número: ";
    std::cin >> numero;
    std::cout << "Você digitou: " << numero << std::endl;

    system("pause");
    return 0;
}
