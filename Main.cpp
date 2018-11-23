#include "Producto.h"
#include "Ropa.h"
#include "Libro.h"
#include "Electronico.h"
#include "Videojuego.h"
#include "Computadora.h"
#include <vector>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
  int resp = 0;
  do{
    cout<<"1. Crear Producto "<<endl
    <<"2. Crear Producto "<<endl
    <<"3. Crear Producto "<<endl
    <<"Que desea hacer?"<<endl;
    cin>>resp;
    switch(resp){
      case 1:{

      }break;

      case 2:{

      }break;

      case 3:{

      }break;
      default:
        resp = 4;
    }

  }while(resp!=4);
  return 0;
}
