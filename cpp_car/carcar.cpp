#include <iostream>
#include <vector>
#include <string>

struct Carro {
    std::string marca;
    std::string modelo;
};

void exibirCarros(const std::vector<Carro>& carros) {
    for (const auto& carro : carros) {
        std::cout << "Marca: " << carro.marca << ", Modelo: " << carro.modelo << std::endl;
    }
}

int main() {
    std::vector<Carro> carros2021 = {{"Peugeot", ""},
                                      {"BMW", ""},
                                      {"Audi", ""},
                                      {"Mercedes", ""},
                                      {"Volkswagen", ""},
                                      {"Volvo", ""}};

    std::vector<Carro> carros2022 = {{"hb20", ""},
                                      {"corsa", ""},
                                      {"audi", ""},
                                      {"tesla", ""},
                                      {"volkswagen", ""}};

    std::vector<Carro> carros2023 = {{"amarok", ""},
                                      {"bmw", ""},
                                      {"audi", ""},
                                      {"civic", ""},
                                      {"RAM", "F 250"}};

    std::cout << "Carros de 2021:" << std::endl;
    exibirCarros(carros2021);

    std::cout << "\nCarros de 2022:" << std::endl;
    exibirCarros(carros2022);

    std::cout << "\nCarros de 2023:" << std::endl;
    exibirCarros(carros2023);

    return 0;
}
