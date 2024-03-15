/**
 * File sorgente principale in cui si usa una variabile definita esternamente in un altro file sorgente
 * 
 * NOTA BENE --> Non si sta specificando un include al file che contiene la variabile e la funzione usate
 * 
*/
#include <iostream>
#include <cstdlib>

// Dichiara le variabili 'esterne' che userai
extern int RGB_VALUE;

// Dichiara il metodo 'esterno' che userai
extern void printVal();

int main(int argc, char** argv)
{

    std::cout << "C++ extern example" << std::endl;

    printVal();

    return EXIT_SUCCESS;
}

// Compila il codice con -> g++ -o ExternDemo source.cpp file_header.cpp
// Oppure usa il comando su Linux: g++ -o ExternDemo source.cpp file_header.cpp && ./ExternDemo