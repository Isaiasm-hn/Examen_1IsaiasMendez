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
	bool tar=false;
	bool stark=false;
  	bool lan=false;
	do{
		cout<<"1)- Agregar\n"<<
				"2)- Eliminar\n"<<
				"3)- Listar\n"<<
				"4)- SALIR\n;
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
									string nombre,jefe,caballo,color;
									int ataque, defensa;
									Dothraki newdoth;
									cout<<"Ingrese Nombre: ";
									cin>>nombre;
									cout<<"Ingrese Jefe: ";
									cin>>jefe;
									cout<<"Ingrese Caballo: ";
									cin>>caballo;
									cout<<"Ingrese color del caballo: ";
									cin>>color;
									cout<<"Ingrese ataque: ";
									cin>>ataque;
									cout<<"ingrese Defensa: ";
									cin>>defensa;
									newdoth.setNombre(nombre);
									newdoth.setJefe(jefe);
									newdoth.setCaballo(caballo);
									newdoth.setColor(color);
									newdoth.setAtaque(ataque);
									newdoth.setDefensa(defensa);
									doth.push_back(newdoth); 
									break;
								}
								case 2:{
									string nombre, simbolo,lema;
									int cant_personas,ataque,defensa;
									cout<<"Ingrese nombre: ";	
									cin>>nombre;
									cout<<"Ingrese Simbolo: ";
									cin>>simbolo;
									cout<<"Ingrese lema: ";
									cin>>lema;
									cout<<"Ingrese cantidad de personas: "
									cin>>cant_personas;
									cout<<"Ingrese Ataque: ";
									cin>>ataque;
									cout<<"Ingrese defensa: ";
									cin>>defensa;
									f_nobles newnobles;
									newnobles.setNombre(nombre);
									newnobles.setSimbolo(simbolo);
									newnobles.setLema(lema);
									newnobles.setCantidadPersonas(cant_personas);
									newnobles.setAtaque(ataque);
									newnobles.setDefensa(defensa);
									nobles.push_back(newnobles);		
									cout<<"Se agrego otro Guerrero noble!";
									break;
								}
								case 3:{
									string nombre, tipo;
									int edad, ataque, defensa;
									cout<<"Ingrese nombre: ";
									cin>>nombre;
									cout<<"Ingrese tipo: ";
									cin>>tipo;
									cout<<"Ingrese edad: ";
									cin>>edad;
									cout<<"Ingrese ataque: ";
									cin>>ataque;
									cout<<"Ingrese defensa: ";
									cin>>defensa;	
									Guardia newguard;
									newguard.setNombre(nombre);
									newguard.setTipo(tipo);
									newguard.setEdad(edad);
									newguard.setAtaque(ataque);
									newguard.setDefensa(defensa);
									guard.push_back(newguard);
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
	}while(opc!=4);
}

