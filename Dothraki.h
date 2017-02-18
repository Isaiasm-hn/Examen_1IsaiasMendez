#include <iostream>

#ifndef DOTHRAKI_H
#define DOTHRAKI_H
using namespace std;
class Dothraki{
	private:
		string nombre;
		string jefe;
		string caballo;
		string color;
		int ataque;
		int defensa;
	public:
  	   void setNombre(string);
      string getNombre();
 		void setJefe(string);
      string getJefe();
	   void setCaballo(string);
      string getCaballo();
    	void setColor(string);
      string getColor();
	   void setAtaque(int);
      int getAtaque();
      void setDefensa(int);
      int getDefensa();
};

#endif
