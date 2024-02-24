#include <iostream>
#include <string>
#include <windows.h>


int main() {
    SetConsoleOutputCP(CP_UTF8);

    std::string entrada;
    std::cout << "Digite algo: ";
    std::cin >> entrada;
    std::cout << "Você digitou: " << entrada << std::endl;
    return 0;
}
