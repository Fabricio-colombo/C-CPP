#include <iostream>
#include <string>
#include <vector>
#include <windows.h>

void SetConsoleOutputUTF8() {
    SetConsoleOutputCP(CP_UTF8);
}

std::vector<std::string> car2024() {
    std::vector<std::string> carros = {"Tesla", "bmw", "audi", "civic", "RAM F 250", "Volvo", "Volkswagen", "Mercedes", "Peugeot", "BMW"};
    return carros;
}

int main() {
    SetConsoleOutputUTF8();
    std::vector<std::string> carros = car2024();
    
    for (const auto& carro : carros) {
        std::cout << carro << std::endl;
    }
    
    return 0;
}
