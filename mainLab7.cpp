#include "Nokemon.h"
#include "NokemonFuego.h"
#include "NokemonHierba.h"
#include "NokemonHielo.h"
#include "Ataque.h"
#include "SimuladorBatalla.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

	int opcion=1;
	while(opcion != 2) {
		cout << "Menu" << endl
		     << "1. Simular Batalla: " << endl
		     << "2. Salir " << endl;
		cout << "Ingrese una opcion: " << endl;
		cin>>opcion;
		switch(opcion) {
			case 1: {
				int opcionSubMenu=1;
				while(opcionSubMenu != 4) {
					cout << "Eleccion de Nokemon" << endl
					     << "1.Fuego " << endl
					     << "2.Hierba "<< endl
					     << "3.Hielo "<< endl
					     << "4.Menu Principal "<<endl;
					cin>>opcionSubMenu;
					switch(opcionSubMenu) {
						case 1: {
							cout<<"Su Nokemon es AnafreMon!"<<endl;
							//Nokemon* nokemonFuego = new AnafreMon();
							break;
						}
						case 2: {
							cout<<"Su Nokemon es AguacateMon!"<<endl;
							//NokemonHierba();
							break;
						}
						case 3: {
							cout<<"Su Nokemon es CharamuscoMon!"<<endl;
							//NokemonHielo();
							break;
						}
						case 4: {
							break;
						}
					}
				}

				break;
			}
			case 2: {
				cout << "Gracias por usar el programa!" << endl;
				break;
			}
		}
	}
	return 0;
}