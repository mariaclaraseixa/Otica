//
// Created by Maria Clara Seixa Scheffel on 22/09/24.
//

#ifndef OCULOS_H
#define OCULOS_H

#include <string>
using  namespace  std;

class Oculos {
private:
    string marca;
    string modelo;

public:
    Oculos();
    Oculos(const string& marca, const string& modelo);

    void set_marca(const string& ma);
    string get_marca() const;

    void set_modelo(const string& mo);
    string get_modelo() const;
};

#endif //OCULOS_H
