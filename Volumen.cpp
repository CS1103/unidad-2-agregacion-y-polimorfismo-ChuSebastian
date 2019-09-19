#include "Volumen.h"



Volumen::Volumen(string _nombre, int _numVol): nombre{_nombre}, numVol{_numVol}
{}

void Volumen::mostrar(){
	cout << "Nombre: " << nombre;
	cout << "Numero de volumen: " << numVol;
}


