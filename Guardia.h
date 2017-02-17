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
		int ataque;
	public:
		void setNombre(string);
		string getNombre();
		void setEdad(int);
		int getEdad();
		void setTipo(String);
		string getTipo();
		void setAtaque(int);
		int getAtaque();		
};
