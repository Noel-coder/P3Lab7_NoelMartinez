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
		switch(opcion){
			case 1:{
				
				break;
			}
			case 2:{
				cout << "Gracias por usar el programa!" << endl;
				break;
			}
		}
	}
	return 0;
}