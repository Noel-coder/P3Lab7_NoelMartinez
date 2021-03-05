#ifndef NOKEMONHIELO_H
#define NOKEMONHIELO_H

#include "Nokemon.h"
#include <vector>
#include <string>
using namespace std;

class NokemonHielo : public Nokemon
{
	private:
		vector<Ataque*>AtaquesHielo;
	public:
		NokemonHielo();
		~NokemonHielo();
};

#endif