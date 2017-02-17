#include "Guardia.h"
#include <iostream>
#include <vector>
#include <string>

#ifndef LANNISTER_H
#define LANNISTER_H
class Lannister{
	private:
		string nombre;
		string emblema
		string lema;
		vector* <Guardia*> ejercito;
		int dinero;
		int fuerza;
		int integrantes;
	public:
		 void setNombre(string);
  	    string getNombre();
 
       void setEmblema(string);
       string getEmblema();
 
       void setLema(string);
       string getLema();
		
		 void setEjercito(Guardia*);
		 vector* getEjercito();
		
		 void setDinero(int);
		 int getDinero();
	
		 void setFuerza(int);
		 int getFuerza();

		 void setIntegrantes(int);
		 int getIntegrantes();
}; 
#endif
