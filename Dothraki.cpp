#include "Dothraki.h"
using namespace std;

void Dothraki::setNombre (string x){
	nombre=x;
}

string Dothraki::getNombre (){
	return nombre;
}

void Dothraki::setJefe (string x){
   jefe=x;
}
   
string Dothraki::getJefe (){
	return jefe;
}

void Dothraki::setCaballo (string x){
   caballo=x;
}
   
string Dothraki::getCaballo (){
   return caballo;
}

void Dothraki::setColor (string x){
  color=x;
}
   
string Dothraki::getColor (){
   return color;
}

void Dothraki::setAtaque (int x){
   ataque=x;
}
   
int Dothraki::getAtaque (){
   return ataque;
}

void Dothraki::setDefensa (int x){
  defensa =x;
}
   
int Dothraki::getDefensa (){
   return defensa;
}
