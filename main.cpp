#include <iostream>
#include <string>
#include <cstdlib>
#include "EntradaSaida.h"
#include "Oculos.h"

using namespace std;

int main() {
    Oculos oculos("", "");

    do {
        // Escolhendo a marca
        cout << "Escolhendo a marca...\n";
        string marcaEscolhida = escolherMarca();
        oculos.set_marca(marcaEscolhida);

        // Escolhendo o modelo
        cout << "\nEscolhendo o modelo...\n";
        string modeloEscolhido = escolherModelo();
        oculos.set_modelo(modeloEscolhido);

        // Exibindo a escolha do usuário
        cout << "\nSua escolha de óculos foi:\n";
        cout << "Marca: " << oculos.get_marca() << "\n";
        cout << "Modelo: " << oculos.get_modelo() << "\n";

        // Pergunta se deseja continuar
        cout << "\nDeseja continuar? (1 - Sim, 2 - Não): ";
    } while (continuar() == 1);

    return 0;
}
