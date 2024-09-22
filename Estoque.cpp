#include "Estoque.h"

Estoque::Estoque() {
    // Construtor padrão
}

bool Estoque::incluir_estoque(int codigo, const Oculos& oculos) {
    estoque_map[codigo] = oculos;
    return true;
}

bool Estoque::alterar_estoque(int codigo, const Oculos& oculos) {
    if (estoque_map.find(codigo) != estoque_map.end()) {
        estoque_map[codigo] = oculos;
        return true;
    }
    return false;
}

bool Estoque::excluir_estoque(int codigo) {
    if (estoque_map.find(codigo) != estoque_map.end()) {
        estoque_map.erase(codigo);
        return true;
    }
    return false;
}

bool Estoque::verificar_estoque(int codigo) const {
    return estoque_map.find(codigo) != estoque_map.end();
}

Oculos Estoque::get_oculos(int codigo) const {
    if (estoque_map.find(codigo) != estoque_map.end()) {
        return estoque_map.at(codigo);
    }
    return Oculos();
}

// Método que retorna o mapa de estoque
const unordered_map<int, Oculos>& Estoque::obter_estoque() const {
    return estoque_map;  // <--- Retorna o mapa do estoque sem imprimir nada
}