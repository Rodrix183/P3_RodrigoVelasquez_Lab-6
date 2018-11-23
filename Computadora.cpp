#include "Computadora.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

Computadora::Computadora(){

}
Computadora::~Computadora(){

}
Computadora::Computadora(string so){
  sistema = so;
}
string Computadora::getSistema(){
  return sistema;
}
void Computadora::setSistema(string s){
  sistema = s;
}
