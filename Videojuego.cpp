#include "Videojuego.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

Videojuego::Videojuego(){

}
Videojuego::~Videojuego(){

}
Videojuego::Videojuego(string developer){
  desarrollador = developer;
}
string Videojuego::getDesarrollador(){
  return desarrollador;
}
void Videojuego::setDesarrollador(string d){
  desarrollador = d;
}
