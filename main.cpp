#include "Targaryen.h"
#include "Starks.h"
#include "Dothraki.h"
#include "f_nobles.h"
#include "Guardia.h"
#include "Lannister.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	Lannister ln;
	Targaryen tr;
	Starks st;
	vector <Dothraki> doth;
	vector <Guardia> guard;
	vectoy <f_nobles> nobles;
	int opc;
	do{
		cout<<"1)- Agregar\n"<<
				"2)- Eliminar\n"<<
				"3)- Listar\n";
		cout<<"Ingrese Opcion: ";
		cin>>opc;
		switch (opc){
			case 1:{
				int opc2;
				cout<<"1)- Ejercito\n "<<
						"2)- CASA\n"<<
						"3)- Ingrese opcion:";
				cin>>opc2;
				switch (opc2){
					case 1:{
							int opc3;
							cout<<"1) Dothraki\n"<<
									"2) Familia noble\n"<<
									"3) Guardia Real\n"<<
									"Ingrese Opcion: ";
							cin>>opc3
							switch (opc3){
								case 1:{
																	
									break;
								}
								case 2:{

									break;
								}
							}
						break;
					}//case 1

					case 2:{

						break;
					}//case 2
	
				}	
				
			break;
			}//fin case 1
		}
	}while()
}

