#iinclude <iostream>
#include <string>

#ifndef F_NOBLES_H
#define F_NOBLES_H

class f_nobles{
	private:
		string nombre;
		string simbolo_e;
		string lema;
		int cant_personas;
		int ataque;
		int defensa;
	public:
		f_nobles(string,string,lema,int,int,int);
		void setNombre(string);
		string getNombre();
		void setSimbolo(string);
		string getSimbolo();
		void setLema(string);
		string getLema();
		void setCantidadPersonas(int);
		int getCantidadPersonas();
		void setAtaque(int);
		int getAtaque();
		void setDefensa();
		int getDefensa();

};
#endif

