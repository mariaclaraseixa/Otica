//
// Created by Maria Clara Seixa Scheffel on 22/09/24.
//

#ifndef ESTOQUE_H
#define ESTOQUE_H

#include <unordered_map>
#include "Oculos.h"

class Estoque {
private:
    unordered_map<int, Oculos> estoque_map;

public:
    Estoque();

    // Método para incluir um novo óculos no estoque
    bool incluir_estoque(int codigo, const Oculos& oculos);

    // Método para alterar um óculos no estoque baseado no código
    bool alterar_estoque(int codigo, const Oculos& oculos);

    // Método para excluir um óculos do estoque baseado no código
    bool excluir_estoque(int codigo);

    // Método para verificar se o item está no estoque
    bool verificar_estoque(int codigo) const;

    // Método para obter um óculos do estoque
    Oculos get_oculos(int codigo) const;

    // Método para obter o mapa do estoque (sem impressão)
    const unordered_map<int, Oculos>& obter_estoque() const;  // <--- Novo método
};

#endif // ESTOQUE_H
