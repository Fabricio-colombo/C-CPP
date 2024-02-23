#include <iostream>
#include <string>
#include <utf8/utf8.h>

int main () {

    std::string input;
    std::cout << "Digite algo em UTF-8: ";
    std::getline(std::cin, input);
    std::cout << "Você digitou: " << input << std::endl;


    return 0;
}