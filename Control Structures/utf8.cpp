#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string frase_ascii = "Olá, mundo! Vamos testar UTF-8.";

    std::vector<unsigned char> bytes_utf8;

    for (char c : frase_ascii) {
        bytes_utf8.push_back(static_cast<unsigned char>(c));
    }

    std::cout << "Frase em UTF-8:" << std::endl;
    for (unsigned char byte : bytes_utf8) {
        std::cout << std::hex << static_cast<int>(byte) << " ";
    }
    std::cout << std::endl;

    return 0;
}
