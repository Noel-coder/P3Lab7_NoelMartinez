#ifndef NOKEMONFUEGO_H
#define NOKEMONFUEGO_H

#include "Nokemon.h"
#include <vector>
#include <string>
#include <ctime>
using namespace std;

class NokemonFuego : public Nokemon
{
	private:
		vector<Ataque*>AtaquesFuego;
	public:
		NokemonFuego();
		~NokemonFuego();
		NokemonFuego(double,double,double);
		void inicializarAtaques(int);
		
};

#endif