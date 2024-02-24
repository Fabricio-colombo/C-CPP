#include <iostream>
#include <locale>
#include <string>

void set_utf8_locale() {
    setlocale(LC_ALL, "en_US.UTF-8");
}

int main() {
    set_utf8_locale();

    std::cout << "Digite algo em UTF-8: ";

    std::string entrada;
    std::cin >> entrada;

    std::cout << "Você digitou: " << entrada << std::endl;

    return 0;
}
