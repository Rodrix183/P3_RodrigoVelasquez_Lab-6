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

int main(){
  int resp = 0;
  string name = "";
  int kilos = 0;
  int op = 0;
  Caja* box = NULL;
  do{
    cout<<"1. Crear Producto "<<endl
    <<"2. Mostrar "<<endl
    <<"3. Salir "<<endl
    <<"Que desea hacer?"<<endl;
    cin>>resp;
    switch(resp){
      case 1:{
        cout<<"Ingrese nombre del producto: "<<endl;
        cin>>name;
        cout<<"Ingrese el peso: "<<endl;
        cin>>kilos;
        cout<<"1. Libro\n"
        <<"2. Ropa\n"
        <<"3. Electronico\n"
        <<"Ingrese el tipo de producto: "<<endl;
        cin>>op;
        switch (op) {
          case 1:{

          }break;

          case 2:{

          }break;

          case 3:{

          }break;
        }
      }break;

      case 2:{

      }break;

      default:
        resp = 3;
    }

  }while(resp!=3);
  return 0;
}
