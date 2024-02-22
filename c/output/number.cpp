#include <iostream>
#include <stdlib.h>
#include <locale>
#include <windows.h>


int main() {
    SetConsoleOutputCP(CP_UTF8);
    int number;
    std::cout << "Digite um numero: ";
    std::cin >> number;
    std::cout << "Você digitou: " << number << std::endl;
    system("pause");
    return 0;
}