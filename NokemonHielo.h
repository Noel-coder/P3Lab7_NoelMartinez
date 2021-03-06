#ifndef NOKEMONHIELO_H
#define NOKEMONHIELO_H

#include "Nokemon.h"
#include <vector>
#include <string>
#include <ctime>
using namespace std;

class NokemonHielo : public Nokemon
{
	private:
		vector<Ataque*>AtaquesHielo;
	public:
		NokemonHielo();
		~NokemonHielo();
		void inicializarAtaques(int);
};

#endif