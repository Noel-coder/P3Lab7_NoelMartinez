#include "CharamuscoMon.h"

CharamuscoMon::CharamuscoMon()
{
	setSaludMaxima(44.0);
	setAtaque(48.0);
	setDefensa(65.0);
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

CharamuscoMon::~CharamuscoMon()
{
}