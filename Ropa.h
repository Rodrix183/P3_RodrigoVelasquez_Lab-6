#ifndef ROPA_H
#define ROPA_H

#include "Producto.h"

#include <string>
using std::string;

class Ropa : public Producto{
  protected:
    string tipo;
  public:
    Ropa();

    ~Ropa();
    Ropa(string);

    string getTipo();
    void setTipo(string);

};

#endif
