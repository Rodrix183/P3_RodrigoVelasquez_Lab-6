#include "Libro.h"
#include "Producto.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

Libro::Libro(){

}

Libro::~Libro(){

}
Libro::Libro(string code){
  codigo = code;
}

string Libro::getCodigo(){
  return codigo;
}
void Libro::setCodigo(string c){
  codigo = c;
}
string Libro::Tp(string tpe){
  return tpe = "Libro";
}
string Libro::Frg(string fra){
  return fra = "No Fragil";
}
