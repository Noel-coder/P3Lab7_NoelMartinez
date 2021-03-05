#include "NokemonFuego.h"

NokemonFuego::NokemonFuego()
{
}

NokemonFuego::~NokemonFuego()
{
}

void inicializarAtaques(){
	int random;
	srand (time(0));
	for(int i=0; i<=6;i++){
		//imprime random de 1 a 6 
		random=1+(rand%6);
	}
	switch(random){
		case 1:{
			AtaquesFuego.push_back(new Ataque("Comal Ardiente","Fuego",12));
			break;
		}
		case 2:{
			AtaquesFuego.push_back(new Ataque("Espatula Asadora","Fuego",15));
			break;
		}
		case 3:{
			AtaquesFuego.push_back(new Ataque("Llamarada","Fuego",35));
			break;
		}
		case 4:{
			AtaquesFuego.push_back(new Ataque("Giro Fuego","Fuego",40));
			break;
		}
		case 5:{
			AtaquesFuego.push_back(new Ataque("Tornado de Fuego","Fuego",55));
			break;
		}
		case 6:{
			AtaquesFuego.push_back(new Ataque("Intel 9","Fuego",60));
			break;
		}
	}
}