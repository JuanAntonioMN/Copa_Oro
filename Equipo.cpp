#include "Equipo.h"

Equipo::Equipo( ){
	this->nombre=" ";
	this->marcado=false;
}
void Equipo::setNombre(std::string nombre){
	this->nombre=nombre;
}
std::string Equipo::getNombre( ){
	return nombre;
}
void Equipo::setMarcado(bool marca){
	this->marcado=marca;
}
bool Equipo::getMarcado( ){
	return marcado;
}