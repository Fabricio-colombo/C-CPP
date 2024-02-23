#include <iostream>
#include <string>
#include <codecvt>
#include <locale>

int main() {
    std::locale::global(std::locale(""));

    std::string input;
    std::cout << "Digite algo em UTF-8: ";
    std::getline(std::cin, input);
    std::cout << "Você digitou: " << input << std::endl;

    return 0;
}
