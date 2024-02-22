#include <iostream>

int main (){

    int x;
    x = 10;
    std::cout << x << std::endl;
    
    if (x == 10){
        std::cout << "x is 10" << std::endl;
    }
    else{
        std::cout << "x is not 10" << std::endl;
    }

    int y;
    y = 20;

    if (y == 10) {
        std::cout << "y is 10" << std::endl;
    }
    else{
        std::cout << "y is not 10" << std::endl;
    }
    
    // while (x == 10) {
    //     std::cout << "x is 10" << std::endl;
    // }

    return 0;
}