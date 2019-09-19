#pragma once
#include "Biblioteca.h"
#include <string>

class Volumen: public Biblioteca{
	string nombre;
	int numVol;

public:
	void mostrar();
};