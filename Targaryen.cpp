#include "Targaryen.h"
#include <string>
using namespace std;


void Targaryen::setReina (string x){
		reina=x;

}

string Targaryen::getReina (){
	return reina;
} 


void Targaryen::setAnimal (string x){
		animal=x;

}

string Targaryen::getAnimal (){
	return animal;
} 


void Targaryen::setEmblema (string x){
		emblema=x;

}

string Targaryen::getEmblema (){
	return emblema;
} 


void Targaryen::setDragones (int x){
		dragones=x;

}

int Targaryen::getDragones (){
	return dragones ;
} 


void Targaryen::setBarcos (int x){
		barcos=x;

}

int Targaryen::getBarcos (){
	return barcos;
} 

void Targaryen::setEjercito(Dothraki* x){
	ejercito.push_back(x);
}




