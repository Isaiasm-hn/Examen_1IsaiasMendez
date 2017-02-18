#include "Starks.h"
#include "f_nobles.h"
#include <string>
#include <vector>
using namespace std;

void Starks::setBoss(string x){
	boss=x;
}

string Starks::getBoss(){
	return boss;
}

void Starks::setLobos(int x){
	lobos=x;
}

int Starks::getLobos(){
	return lobos;
}

void Starks::setEmblema(string x){
	emblema=x;
}

string Starks::getEmblema(){
	return emblema;
}

void Starks::setLema(string x){
	lema=x;
}

string Starks::getLema(){
	return lema;
}

void Starks::setGuerrero(string x){
	guerrero=x;
}

string Starks::getGuerrero(){
	return guerrero;
}

void Starks::setEjercito(f_nobles* x){
	ejercito.push_back(x);
}


