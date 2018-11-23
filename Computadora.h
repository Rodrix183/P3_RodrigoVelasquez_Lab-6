#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include "Electronico.h"

#include <string>
using std::string;

class Computadora : public Electronico{
  protected:
    string sistema;
  public:
    Computadora();

    ~Computadora();
    Computadora(string);

    string getSistema();
    void setSistema(string);

};

#endif
