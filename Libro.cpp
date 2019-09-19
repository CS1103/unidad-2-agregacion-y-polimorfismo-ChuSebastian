#include "Libro.h"

Libro::Libro(string _nombre, int _numVol, int _numLibros): Volumen (nombre, numVol) 
{
	numLibros = _numLibros;
}
