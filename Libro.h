#pragma once
#include "Volumen.h"

class Libro : public Volumen {
	int numLibros = 0;
public: 

	Libro(string _nombre, int _numVol, int _numLibros);
	
};