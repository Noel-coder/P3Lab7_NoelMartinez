#include "NokemonHierba.h"

NokemonHierba::NokemonHierba()
{
}

NokemonHierba::~NokemonHierba()
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
			AtaquesHierba.push_back(new Ataque("Hoja Aguda","Hierba","12"));
			break;
		}
		case 2:{
			AtaquesHierba.push_back(new Ataque("Hierba Lazo","Hierba","15"));
			break;
		}
		case 3:{
			AtaquesHierba.push_back(new Ataque("Sintesis","Hierba","35"));
			break;
		}
		case 4:{
			AtaquesHierba.push_back(new Ataque("Latigazo","Hierba","40"));
			break;
		}
		case 5:{
			AtaquesHierba.push_back(new Ataque("Tormenta Floral","Hierba","56"));
			break;
		}
		case 6:{
			AtaquesHierba.push_back(new Ataque("Rayo Solar","Hierba","59"));
			break;
		}
	}
}