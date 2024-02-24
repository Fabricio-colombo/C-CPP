#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>
#include <windows.h>


void SetConsoleOutputUTF8() {
    SetConsoleOutputCP(CP_UTF8);
}

struct Carro {
    std::string modelo;
    int ano;
    double valor;
};

void listarCarros(const std::vector<Carro>& carros) {
    for (const auto& carro : carros) {
        std::cout << "Modelo: " << carro.modelo << ", Ano: " << carro.ano << ", Valor: " << carro.valor << std::endl;
    }
}

bool alugarVeiculo() {
    std::string resposta;
    std::cout << "Você aceita alugar este veículo? (sim/não): ";
    std::cin >> resposta;
    return (resposta == "sim");
}

int main() {
    SetConsoleOutputUTF8();
    std::srand(std::time(nullptr));

    std::cout << "Bom dia! Qual é o seu nome? ";
    std::string nomeCliente;
    std::cin >> nomeCliente;

    std::cout << "Olá, " << nomeCliente << "! Temos os seguintes veículos disponíveis para aluguel hoje:" << std::endl;

    std::vector<Carro> carros2021 = {{"Peugeot", 2021, 150.0}, {"BMW", 2021, 200.0}, {"Audi", 2021, 180.0}, {"Mercedes", 2021, 220.0}, {"Volkswagen", 2021, 130.0}, {"Volvo", 2021, 170.0}, {"Fiat", 2021, 120.0}};
    std::vector<Carro> carros2022 = {{"hb20", 2022, 140.0}, {"corsa", 2022, 130.0}, {"audi", 2022, 190.0}, {"tesla", 2022, 250.0}, {"volkswagen", 2022, 135.0}, {"Ford", 2022, 160.0}, {"Toyota", 2022, 170.0}};
    std::vector<Carro> carros2023 = {{"amarok", 2023, 170.0}, {"bmw", 2023, 210.0}, {"audi", 2023, 200.0}, {"civic", 2023, 180.0}, {"RAM F 250", 2023, 240.0}, {"Hyundai", 2023, 150.0}, {"Renault", 2023, 140.0}};
    std::vector<Carro> carros2024 = {{"Tesla", 2024, 300.0}, {"bmw", 2024, 220.0}, {"audi", 2024, 230.0}, {"civic", 2024, 190.0}, {"RAM F 250", 2024, 250.0}, {"Volvo", 2024, 180.0}, {"Volkswagen", 2024, 160.0}, {"Mercedes", 2024, 250.0}, {"Peugeot", 2024, 140.0}, {"BMW", 2024, 230.0}};

    std::cout << "\nCarros de 2021:" << std::endl;
    listarCarros(carros2021);

    std::cout << "\nCarros de 2022:" << std::endl;
    listarCarros(carros2022);

    std::cout << "\nCarros de 2023:" << std::endl;
    listarCarros(carros2023);

    std::cout << "\nCarros de 2024:" << std::endl;
    listarCarros(carros2024);

    std::cout << std::endl;

    int index2021 = std::rand() % carros2021.size();
    std::cout << "O carro selecionado para alugar de 2021 é: " << carros2021[index2021].modelo << std::endl;
    if (alugarVeiculo()) {
        std::cout << "Você alugou o carro " << carros2021[index2021].modelo << " por " << carros2021[index2021].valor << " por dia." << std::endl;
        return 0;
    }

    int index2022 = std::rand() % carros2022.size();
    std::cout << "O carro selecionado para alugar de 2022 é: " << carros2022[index2022].modelo << std::endl;
    if (alugarVeiculo()) {
        std::cout << "Você alugou o carro " << carros2022[index2022].modelo << " por " << carros2022[index2022].valor << " por dia." << std::endl;
        return 0;
    }

    int index2023 = std::rand() % carros2023.size();
    std::cout << "O carro selecionado para alugar de 2023 é: " << carros2023[index2023].modelo << std::endl;
    if (alugarVeiculo()) {
        std::cout << "Você alugou o carro " << carros2023[index2023].modelo << " por " << carros2023[index2023].valor << " por dia." << std::endl;
        return 0;
    }

    int index2024 = std::rand() % carros2024.size();
    std::cout << "O carro selecionado para alugar de 2024 é: " << carros2024[index2024].modelo << std::endl;
    if (alugarVeiculo()) {
        std::cout << "Você alugou o carro " << carros2024[index2024].modelo << " por " << carros2024[index2024].valor << " por dia." << std::endl;
        return 0;
    }

    std::cout << "Nenhum carro foi alugado." << std::endl;
    return 0;
}
