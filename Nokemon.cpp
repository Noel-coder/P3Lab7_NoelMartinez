#include "Nokemon.h"
#include "ctime


Nokemon::Nokemon() {
}

Nokemon::~Nokemon() {
}

Nokemon::Nokemon(double _defensa, double _ataque, double _saludActual, double _saludMaxima, int _nivel, string _nombre) {
	this -> defensa = _defensa;
	this -> ataque = _ataque;
	this -> saludActual = _saludActual;
	this -> saludMaxima = _saludMaxima;
	this -> nivel = _nivel;
	this -> nombre = _nombre;
}

double Nokemon::getDefensa() {
	return this->defensa;
}

void Nokemon::setDefensa(double _defensa) {
	this->defensa = _defensa;
}

double Nokemon::getAtaque() {
	return this->ataque;
}

void Nokemon::setAtaque(double _ataque) {
	this->ataque = _ataque;
}

double Nokemon::getSaludActual() {
	return this->saludActual;
}

void Nokemon::setSaludActual(double _saludActual) {
	this->saludActual = _saludActual;
}

double Nokemon::getSaludMaxima() {
	return this->saludMaxima;
}

void Nokemon::setSaludMaxima(double _saludMaxima) {
	this->saludMaxima = _saludMaxima;
}

int Nokemon::getNivel() {
	return this -> nivel;
}
void Nokemon::setNivel(int _nivel) {
	this->nivel = _nivel;
}
string Nokemon::getNombre() {
	return this -> nombre;
}
void Nokemon::setNombre(string _nombre) {
	this->nombre = _nombre;
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
			
			break;
		}
		case 2:{
			
			break;
		}
		case 3:{
			
			break;
		}
		case 4:{
			
			break;
		}
		case 5:{
			
			break;
		}
		case 6:{
			
			break;
		}
	}
}