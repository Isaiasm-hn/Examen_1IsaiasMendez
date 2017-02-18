#include "Guardia.h"
using namespace std;

void Guardia::setNombre(string x){
	nombre=x;
}

string Guardia::getNombre(){
	return nombre;
}

void Guardia::setEdad(int x){
	edad=x;
}

int Guardia::getEdad(){
	return edad;
}


void Guardia::setTipo(string x){
	tipo=x;
}

string Guardia::getTipo(){
	return tipo;
}

void Guardia::setAtaque(int x){
   ataque=x;
}

int Guardia::getAtaque(){
   return ataque;
}

void Guardia::setDefensa(int x){
   defensa=x; 
}

int Guardia::getDefensa(){
   return defensa;
}
