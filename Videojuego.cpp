#include "Videojuego.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

Videojuego::Videojuego(){

}
Videojuego::~Videojuego(){

}
Videojuego::Videojuego(string developer,string t,string f) : Electronico(t,f){
  desarrollador = developer;
  t = "Videojuego";
  f = "Fragil";
}
string Videojuego::getDesarrollador(){
  return desarrollador;
}
void Videojuego::setDesarrollador(string d){
  desarrollador = d;
}
