#include <iostream>
#include <cstdlib>
#include "funciones_cripto.h"

void Usage(int argc, char *argv[]){
    if(argc != 6){
        std::cout << argv[0] << "-- Cifrado de ficheros
Modo de uso: ./cripto fichero_entrada fichero_salida método password operación
Pruebe ./cripto --help para más información" << std::endl;
exit(EXIT_SUCCESS);
    }
    std::string parameter{argv[1]};
    if(parameter == "--help"){
        std::cout << help << std::endl;
        exit(EXIT_SUCCESS);
    }
}