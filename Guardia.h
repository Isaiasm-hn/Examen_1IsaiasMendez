#include <iostream>
#include <string>

#ifndef GUARDIA_H
#define GUARDIA_H
using namespace std;
class Guardia{
	private:
		string nombre;
		int edad;
		string tipo;
		int ataque;
		int defensa;
	public:
		void setNombre(string);
		string getNombre();
		void setEdad(int);
		int getEdad();
		void setTipo(string);
		string getTipo();
		void setAtaque(int);
		int getAtaque();
		void setDefensa(int);
		int getDefensa();
		
};
#endif
