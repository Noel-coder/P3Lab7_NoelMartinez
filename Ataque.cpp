#include "Ataque.h"

Ataque::Ataque() {
}

Ataque::~Ataque() {
}

Ataque::Ataque(string _nombre,string _tipo,int _poder) {
	this->nombre=_nombre;
	this->tipo=_tipo;
	this->poder=_poder;
}

string Ataque::getNombre(){
	return this->nombre;
}

void Ataque::setNombre(string _nombre){
	this->nombre= _nombre;
}

string Ataque::getTipo(){
	return this->tipo;
}

void Ataque::setTipo(string _tipo){
	this->tipo= _tipo;
}

int Ataque::getPoder(){
	return this->poder;
}

void Ataque::setPoder(int _poder){
	this->poder=_poder;
}