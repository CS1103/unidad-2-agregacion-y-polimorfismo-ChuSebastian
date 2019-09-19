#pragma once
#include "Biblioteca.h"
#include <string>

class Volumen {
protected:
	string nombre;
	int numVol = 0;

public:
	Volumen(string _nombre, int _numVol);
	virtual void mostrar();

};