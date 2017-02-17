#include <iostream>
#include <string>
#include <vector>


#ifndef STARK_H
#define STARK_H

class Stark{
	private:
		string boss;
		int lobos;
		string emblema;
		string lema;
		vector* <f_nobles*> ejercito;
		string guerreo;
		int integrantes;
	public:
		Stark(string, int, string, string, string,int);
		
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
			
		void setEjercito(f_nobles);
		vector* getEjercito();
};
#endif
