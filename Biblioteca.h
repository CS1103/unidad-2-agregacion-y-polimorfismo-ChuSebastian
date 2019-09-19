#pragma once
#include <iostream>
using namespace std;

class Biblioteca {
	int maxLibros;
	int maxRevistas;

public:
	Biblioteca(int libro = 0, int revista = 0);	
	
	int getMaxLibros() { return maxLibros; }
	int getMaxRevistas() { return maxRevistas; }

	void setMaxLibros(int aMaxLibros) { maxLibros = aMaxLibros; }
	void setMaxRevistas(int aMaxRevistas) { maxRevistas = aMaxRevistas; }

	void imprimir();


	
};