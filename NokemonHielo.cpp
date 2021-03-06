#include "NokemonHielo.h"

NokemonHielo::NokemonHielo()
{
}

NokemonHielo::~NokemonHielo()
{
}

void NokemonHielo::inicializarAtaques(int random){
	switch(random){
		case 1:{
			AtaquesHielo.push_back(new Ataque("Aliento Helado","Hielo",14));
			break;
		}
		case 2:{
			AtaquesHielo.push_back(new Ataque("Puno de Hielo","Hielo",19));
			break;
		}
		case 3:{
			AtaquesHielo.push_back(new Ataque("Ventisca","Hielo",37));
			break;
		}
		case 4:{
			AtaquesHielo.push_back(new Ataque("Rayo Aurora","Hielo",39));
			break;
		}
		case 5:{
			AtaquesHielo.push_back(new Ataque("Allude","Hielo",55));
			break;
		}
		case 6:{
			AtaquesHielo.push_back(new Ataque("Titanic","Hielo",60));
			break;
		}
	}
}