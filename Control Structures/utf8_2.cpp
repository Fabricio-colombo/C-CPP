#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

int main() {
    std::string frase_utf8 = "Olá, mundo! Vamos testar UTF-8.";
    std::cout << "Frase em UTF-8 (formato hexadecimal):" << std::endl;
    for (unsigned char byte : frase_utf8) {
        std::cout << "0x" << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(byte) << " ";
    }
    std::cout << std::endl;
    return 0;
}
