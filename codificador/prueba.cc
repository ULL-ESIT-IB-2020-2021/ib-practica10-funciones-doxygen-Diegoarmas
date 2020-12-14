#include <iostream>
#include "prueba.h"
using namespace std;


int main () {
  string msg;
  int clave;

  while (1)
  {
    cout << "Selecciona:/n1 => Encriptar/n2 0> Desencriptar";

    char opt;
    do opt = _getch(); while (opt != '1' && opt != '2');
    system("cls");

    cout << "Escrribe la clave: ";
    cin >> clave;

    cout << "Escribe el mensaje:/n";
    cin >> ws;
    getline (cin, msg);

    if(opt == '1'){
      string nuevo = cesar::Cifrar(msg, clave);
      cout << "/nMensaje encriptado: " << nuevo;
    }
    else {
      string nuevo = Cesar::Cifrado(msg, clave);
      cout << "/nMensaje encriptado. " << nuevo;
    }
    _getch();
    system("cls");
  }
  return 0;
  
}