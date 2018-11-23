#include "Producto.h"
#include "Ropa.h"
#include "Libro.h"
#include "Electronico.h"
#include "Videojuego.h"
#include "Computadora.h"
#include "Caja.h"
#include <vector>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

Caja*** crearMatriz();
int almacFrag();
int almacPeso();

int main(){
  int resp = 0;
  string name = "";
  int kilos = 0;
  int op = 0;

  int opAlmacen = 0;
  string sistemaO = "";
  string develop = "";

  string codLib = "";
  string tipRop = "";

  int posX = 0;
  int posY = 0;
  int contPos = 0;
  int elec_OP = 0;
  bool flag = true;
  Caja* box = new Caja();
  Ropa* cloth = new Ropa();
  Libro* book = new Libro();
  Electronico* device = new Electronico();
  Videojuego* game = new Videojuego();
  Computadora* cpu = new Computadora();
  vector <Producto*> lista_prod;

  int AlmacenFragil[10];
  int AlmacenPeso[10];
  do{
    cout<<"1. Crear Producto "<<endl
    <<"2. Mostrar Almacen"<<endl
    <<"3. Salir "<<endl
    <<"Que desea hacer?"<<endl;
    cin>>resp;
    switch(resp){
      case 1:{
        cout<<"Ingrese nombre del producto: "<<endl;
        cin>>name;

        do{
          if(kilos <= 999){
            cout<<"Ingrese el peso: "<<endl;
            cin>>kilos;
            flag = false;
          }else{
            cout<<"Peso no valido"<<endl;
            flag = true;
          }
        }while (flag!= false);

        cout<<"1. Libro\n"
        <<"2. Ropa\n"
        <<"3. Electronico\n"
        <<"Ingrese el tipo de producto: "<<endl;
        cin>>op;
        switch (op) {
          case 1:{
            cout<<"Ingrese el codigo del libro: "<<endl;
            cin>>codLib;
            lista_prod = box->getLista();
            lista_prod.push_back(new Libro(codLib));
            cout<<"Agregado correctamente!"<<endl;

          }break;
          case 2:{
            cout << "Ingrese el tipo de ropa: " <<endl;
            cin>>tipRop;
            lista_prod = box->getLista();
            lista_prod.push_back(new Ropa(tipRop));
            cout<<"Agregado correctamente!"<<endl;
          }break;

          case 3:{
            cout<<"1. Computadora"<<endl
            <<"2. Videojuego"<<endl
            <<"Cual? "<<endl;
            cin>>elec_OP;
          switch (elec_OP) {
            case 1:{
              //aqui si es Computadora
              cout<<"Ingrese sistema operativo"<<endl;
              cin>>sistemaO;
              lista_prod = box->getLista();
              lista_prod.push_back(new Computadora(sistemaO,"Computadora","Fragil"));
              //AlmacenFragil[posX][posY] = 0;
              cout<<"Agregado correctamente!"<<endl;
            }break;

            case 2:{
              //aqui si es Videojuego
              cout<<"Ingrese Desarrollador"<<endl;
              cin>>develop;
              lista_prod = box->getLista();
              lista_prod.push_back(new Videojuego(develop,"Videojuego","Fragil"));
              //AlmacenFragil[posX][posY] = 0;
              cout<<"Agregado correctamente!"<<endl;
            }break;

            default:
              cout<<"No existe"<<endl;
          }
          }break;

          default:
            cout<<"Opcion no valida "<<endl;
        }
      }break;

      case 2:{
        //Mostrar Almacen
        cout<<"1. Por Peso"<<endl
        <<"2. Por fragilidad "<<endl
        <<"Ingrese tipo de Almacen"<<endl;
        cin>>opAlmacen;
        switch (opAlmacen) {
          case 1:{
            for (int i = 0; i < 10; i++) {
              for (int j = 0; j < 10; j++) {
                //cout<<" "<<AlmacenFragil[i][j];
              }
              cout<<endl;
            }
          }break;

          case 2:{
            for (int i = 0; i < 10; i++) {
              for (int j = 0; j < 10; j++) {
                //cout<<" "<<AlmacenPeso[i][j];
              }
              cout<<endl;
            }
          }break;

          default:
            cout<<"Opcion no valida"<<endl;
        }
      }break;

      default:
      //fin agregar
        resp = 3;
    }

  }while(resp!=3);
  return 0;
}



Caja*** crearMatriz(){
  Caja*** matrix = new Caja**[10];
  for (int i = 0; i < 10; i++) {
    matrix[i] = new Caja*[10];
  }

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      matrix[i][j]= NULL;
    }
  }
  return matrix;
}

/*int almacFrag(){
  for(){
    for(){

    }
  }
}*/

/*int almacPeso(){
  return matriz[10];
}*/
