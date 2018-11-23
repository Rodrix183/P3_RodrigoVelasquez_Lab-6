#include "Producto.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

Producto::Producto(){

}

Producto::~Producto(){

}
Producto::Producto(string name,int weight,string frag){
  nombre = name;
  weight = peso;
  fragil = frag;
}

string Producto::getNombre(){
  return nombre;
}
void Producto::setNombre(string n){
  nombre = n;
}
int Producto::getPeso(){
  return peso;
}
void Producto::setPeso(int p){
  peso = p;
}
string Producto::getFragil(){
  return fragil;
}
void Producto::setFragil(string f){
  fragil = f;
}
