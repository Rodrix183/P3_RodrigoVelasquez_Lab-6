#include "Ropa.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

Ropa::Ropa(){

}

Ropa::~Ropa(){

}
Ropa::Ropa(string type){
  tipo = type;
}

string Ropa::getTipo(){
  return tipo;
}
void Ropa::setTipo(string t){
  tipo = t;
}
string Ropa::Tp(string tpe){
  return tpe = "Ropa";
}
string Ropa::Frg(string fra){
  return fra = "No Fragil";
}
