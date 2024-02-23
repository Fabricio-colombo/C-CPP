#include <iostream>
#include <string>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    std::string input;
    std::cout << "Digite algo em UTF-8: ";
    std::getline(std::cin, input);
    std::cout << "Você digitou: " << input << std::endl;
    std::cout << "Você digitou: a\u00E1\n";


    return 0;
}
