#ifndef NOKEMONHIERBA_H
#define NOKEMONHIERBA_H

#include "Nokemon.h"
#include <vector>
#include <string>
using namespace std;

class NokemonHierba : public Nokemon
{
	private:
		vector<Ataque*>AtaquesHierba;
	public:
		NokemonHierba();
		~NokemonHierba();
	
};

#endif