#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
using std::string;

class Producto{
  private:
    string nombre;
    int peso;
    string fragil;
  public:
    Producto();

    ~Producto();
    Producto(string,int,string);

    string getNombre();
    void setNombre(string);

    int getPeso();
    void setPeso(int);

    string getFragil();
    void setFragil(string);
};

#endif
