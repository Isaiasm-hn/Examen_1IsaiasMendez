#include <iostream>
#include <string>
#include <vector>
#include "Dothraki.h"
using namespace std;

class Targaryen{
	private:
		string reina;
		string animal;
		string emblema;
		int dragones;
		vector <Dothraki*> ejercito;
		int barcos;
	public:
		void setReina(string);
		string getReina();
		
		void setAnimal(string);
		string getAnimal();

		void setEmblema(string);
		string getEmblema();
		
		void setDragones(int);
		int getDragones();
		
		void setBarcos(int);
		int getBarcos();
		
		void setEjercito(Dothraki*);
		

		

};
