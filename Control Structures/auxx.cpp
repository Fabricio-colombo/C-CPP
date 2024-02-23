#include <iostream>

int main () {

    int x = 5;
    int y = 7;
    int aux = y;
    y = x;
    x = aux;    


    std::cout << x << std::endl;
    std::cout << y << std::endl;

    return 0;
}