#include "Libro.h"
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
