#ifndef ELECTRONICO_H
#define ELECTRONICO_H

#include "Producto.h"

#include <string>
using std::string;

class Electronico : public Producto{
  public:
    Electronico();

    ~Electronico();
    Electronico(string,string);
    void setTipo(string);
    string getTipo();

    void setFrag(string);
    string getFrag();
  private:
    string tipo;
    string frag;
};

#endif
