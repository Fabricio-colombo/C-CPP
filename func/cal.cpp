#include <iostream>

int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(3, 4);
    std::cout << "3 + 4 = " << result << std::endl;
    return 0;
}