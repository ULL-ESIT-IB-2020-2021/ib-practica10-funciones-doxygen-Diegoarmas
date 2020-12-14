#include <iostream>
#include <string>
using namespace std;


int main (int argc , char* argv[]){  // 1 = 1 o 2, 2=clave, 3=texto
string texto = argv[3];
string clave = argv[2];
//Usage (argc, argv);
string limit = argv[1];
const size_t klimit = stoi(limit);

int a,b,c;
int i,j;

string res;//Entrada de Datos

getline(cin, texto);

res = texto;//Se aplica el operador XOR
for(i = 0; i < texto.length() ; i++){
a = int (texto[i]);
j = i % clave.length();
b = int (clave[j]);
c = a ^ b;
res[i] = char( c );
cout << res;

}
}