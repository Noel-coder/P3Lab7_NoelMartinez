#ifndef NOKEMON_H
#define NOKEMON_H
#include "Ataque.h"
#include <vector>
#include <string>
using namespace std;
class Nokemon {
	private:
		double defensa;
		double ataque;
		vector <Ataque*> listaAtaques;
		double saludActual;
		double saludMaxima;
		int nivel;
		string nombre;
	public:
		Nokemon();
		Nokemon(double,double,double,double,int,string);
		~Nokemon();
		Nokemon(vector<Ataque*>);
		double getDefensa();
		void setDefensa(double);
		double getAtaque();
		void setAtaque(double);
		double getSaludActual();
		void setSaludActual(double);
		double getSaludMaxima();
		void setSaludMaxima(double);
		int getNivel();
		void setNivel(int);
		string getNombre();
		void setNombre(string);
		virtual void inicializarAtaques()=0;
};
#endif