#include "Caja.h"
#include "Producto.h"
#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

Caja::Caja(){

}

Caja::~Caja(){

}

Caja::Caja(int p,string f){
  peso_total = p;
  fragil = f;
}

void Caja::setPeso_Total(int weight){
  peso_total = weight;
}
void Caja::setFragil(string fragile){
  fragil = fragile;
}
void Caja::setLista(vector<Producto*> list){
  lista = list;
}
vector<Producto*> Caja::getLista(){
  return lista;
}
string Caja::getFragil(){
  return fragil;
}
int Caja::getPeso_Total(){
  return peso_total;
}

void Caja::addLista(Producto* pro){
  lista.push_back(pro);
}
