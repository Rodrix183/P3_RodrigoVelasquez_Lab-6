#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H

#include "Electronico.h"

#include <string>
using std::string;

class Videojuego : public Electronico{
  protected:
    string desarrollador;
  public:
    Videojuego();

    ~Videojuego();
    Videojuego(string);

    string getDesarrollador();
    void setDesarrollador(string);

};

#endif
