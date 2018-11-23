#include "Electronico.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;


Electronico::Electronico(){

}
Electronico::~Electronico(){

}
Electronico::Electronico(string typ,string fr){
  this->tipo = typ;
  this->frag = fr;
}
void Electronico::setTipo(string t){
  tipo = t;
}
string Electronico::getTipo(){
  return tipo;
}
void Electronico::setFrag(string f){
  frag = f;
}
string Electronico::getFrag(){
  return frag;
}
