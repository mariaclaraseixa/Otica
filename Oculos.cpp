//
// Created by Maria Clara Seixa Scheffel on 22/09/24.
//
#include "Oculos.h"
#include <iostream>

using namespace std;

Oculos::Oculos() : marca(""), modelo("") {}

Oculos::Oculos(const string& marca, const string& modelo)
    : marca(marca), modelo(modelo) {}

void Oculos::set_marca(const string& ma) {
    marca = ma;
}

string Oculos::get_marca() const {
    return marca;
}

void Oculos::set_modelo(const string& mo) {
    modelo = mo;
}

string Oculos::get_modelo() const {  // Corrigido para get_modelo
    return modelo;
}
