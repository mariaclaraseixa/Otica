// Created by Maria Clara Seixa Scheffel on 22/09/24.

#include <iostream>
#include "EntradaSaida.h"

using namespace std;

string escolherMarca() {
    int opcao;
    string marca[] = {"Chanel", "Rayban", "Prada", "Tom Ford", "Persol"};

    do {
        cout << "Escolha a marca do óculos:\n";
        cout << "1 - Chanel\n";
        cout << "2 - Rayban\n";
        cout << "3 - Prada\n";
        cout << "4 - Tom Ford\n";
        cout << "5 - Persol\n";
        cin >> opcao;

        // Adicionando verificação de entrada
        if (cin.fail()) {
            cin.clear(); // Limpa o estado de erro
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora a entrada inválida
            opcao = 0; // Força o loop a continuar
        }
    } while (opcao < 1 || opcao > 5);

    return marca[opcao - 1];
}

string escolherModelo() {
    int opcao;
    string modelo[] = {"Cat-Eye", "Square", "Browline", "Round"};

    do {
        cout << "Escolha o modelo do óculos:\n";
        cout << "1 - Cat-Eye\n";
        cout << "2 - Square\n";
        cout << "3 - Browline\n";
        cout << "4 - Round\n";
        cin >> opcao;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            opcao = 0;
        }
    } while (opcao < 1 || opcao > 4);

    return modelo[opcao - 1];
}

void exibirOculos(const string &marca, const string &modelo) {
    cout << "\nSua escolha de óculos foi:\n";
    cout << "Marca: " << marca << "\n";
    cout << "Modelo: " << modelo << "\n";
}

int continuar() {
    int opcao;
    do {
        cout << "\nDeseja continuar?\n";
        cout << "1 - Sim\n";
        cout << "2 - Não\n";
        cin >> opcao;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            opcao = 0;
        }
    } while (opcao < 1 || opcao > 2);

    return opcao;
}
