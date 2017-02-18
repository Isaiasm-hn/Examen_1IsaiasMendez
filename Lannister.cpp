#include <iostream>
#include <string>
#include "Lannister.h"
using namespace std;

void Lannister::setNombre(string x){
   nombre=x;
}

string Lannister::getNombre(){
   return nombre;
}

void Lannister::setEmblema(string x){
   emblema=x;
}

string Lannister::getEmblema(){
   return emblema;
}

void Lannister::setLema(string x){
   lema=x;
}

string Lannister::getLema(){
   return lema;
}

void Lannister::setDinero (int x){
		dinero=x;

}

int Lannister::getDinero (){
	return dinero;
}

void Lannister::setFuerza (int x){
		fuerza=x;

}

int Lannister::getFuerza (){
	return fuerza;
}

void Lannister::setIntegrantes (int x){
		integrantes=x;

}

int Lannister::getIntegrantes (){
	return integrantes;
}

