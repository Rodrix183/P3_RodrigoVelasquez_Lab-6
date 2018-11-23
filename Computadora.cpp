#include "Computadora.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

Computadora::Computadora(){

}
Computadora::~Computadora(){

}
Computadora::Computadora(string so,string t,string f) : Electronico(t,f){
  sistema = so;
  t = "Computadora";
  f = "Fragil";
}
string Computadora::getSistema(){
  return sistema;
}
void Computadora::setSistema(string s){
  sistema = s;
}
