#include <iostream>
#include <string>
#include <vector>
#include "f_nobles.h"
using namespace std;
using std::vector;
#ifndef STARK_H
#define STARK_H

class Starks{
	private:
		string boss;
		int lobos;
		string emblema;
		string lema;
		vector <f_nobles*> ejercito;
		string guerrero;
		int integrantes;
	public:
		Starks(string, int, string, string, string,int);
		
		void setBoss(string);
		string getBoss();
		
		void setLobos(int);
		int getLobos();
		
		void setEmblema(string);
		string getEmblema();
		
		void setLema(string);
		string getLema();
		
		void setGuerrero(string);
		string getGuerrero();
			
		void setIntegrantes(int);
		int getIntegrantes();
			
		void setEjercito(f_nobles*);
	
};
#endif
