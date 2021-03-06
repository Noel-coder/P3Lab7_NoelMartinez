#include "AnafreMon.h"

AnafreMon::AnafreMon() {
	setSaludMaxima(39.0);
	setAtaque(52.0);
	setDefensa(43.0);
	int randomA, randomB;
	srand (time(0));
	//random de 1 a 6
	randomA=1+(rand()%6);
	randomB=1+(rand()%6);
	while(randomA == randomB) {
		randomB=1+(rand()%6);
	}
	inicializarAtaques(randomA);
	inicializarAtaques(randomB);
}

AnafreMon::~AnafreMon() {
}

