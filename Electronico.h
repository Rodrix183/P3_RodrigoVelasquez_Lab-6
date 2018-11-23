#ifndef ELECTRONICO_H
#define ELECTRONICO_H

#include "Producto.h"

#include <string>
using std::string;

class Electronico : public Producto{
  public:
    Electronico();
    ~Electronico();
};

#endif
