#include <iostream>

int main() {
    int meuArray[5] = {10, 20, 30, 40, 50};

    std::cout << "Elementos do array:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "meuArray[" << i << "] = " << meuArray[i] << std::endl;
    }

    return 0;
}
