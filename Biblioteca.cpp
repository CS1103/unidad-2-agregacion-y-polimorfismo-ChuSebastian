#include "Biblioteca.h"


Biblioteca::Biblioteca(int _maxLibros, int _maxRevistas):
	maxLibros { _maxLibros }, maxRevistas { _maxRevistas }
{}

void Biblioteca::imprimir(){
	cout << "La cantidad maxima de libros es: " << maxLibros << endl;
	cout << "La cantidad maxima de revistas es: " << maxRevistas << endl;
}




