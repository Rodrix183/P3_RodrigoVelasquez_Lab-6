#ifndef CAJA_H
#define CAJA_H
#include "Producto.h"
#include <vector>

using std::vector;
using std::string;

class Caja{
  private:
    vector<Producto*> lista;
    int peso_total;
    string fragil;
  public:
    Caja();

    ~Caja();
    Caja(int,string);

    void setLista(vector<Producto*>);
    void setPeso_Total(int);
    void setFragil(string);

    vector<Producto*> getLista();
    int getPeso_Total();
    string getFragil();

    void addLista(Producto*);
};

#endif
