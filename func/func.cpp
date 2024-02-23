#include <iostream>

void helloworld() {
    std::cout << "Hello World!" << std::endl;
}

int main() {

    int i = 0;

    while (i < 10) {
        helloworld();
        i++;
    }

    system("pause");
    return 0;
}