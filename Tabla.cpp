#include "Tabla.h"

Tabla::Tabla( ){
	this->cantidadP=0;
	this->victorias=0;
	this->empates=0;
	this->derrotas=0;
	this->puntos=0;
	this->goles=0;
	
}

void Tabla::setCantidadP(int cantidad){
	this->cantidadP=cantidad;
}

int Tabla::getCantidadP( ){
	return cantidadP;
}

void Tabla::setDerrotas(int derrotas){
	this->derrotas=derrotas;
}

int Tabla::getDerrotas( ){
	return derrotas;
}

void Tabla::setEmpates(int empate){
	this->empates=empate;
}

int Tabla::getEmpates( ){
	return empates;
}

void Tabla::setPuntos(int puntos){
	this->puntos=puntos;
}

int Tabla::getPuntos( ){
	return puntos;
}

void Tabla::setVictorias(int victorias){
	this->victorias=victorias;
}

int Tabla::getVictorias( ){
	return victorias;
}

void Tabla::setGoles(int goles){
	this->goles=goles;
}

int Tabla::getGoles( ){
	return goles;
}

void Tabla::SumarPuntos(int puntos){
	this->puntos=this->puntos+puntos;
}

void Tabla::OperarGoles(int cantidad,int opcion){
	switch(opcion){
		case 0:
			goles=goles+cantidad;
		break;
		case 1:
			goles=goles-cantidad;
		break;
	}
}

void Tabla::SumarJuegos( ){
		cantidadP++;
}

void Tabla::SumarDerrotas( ){	
		derrotas++;
}

void Tabla::SumarEmpates( ){	
		empates++;
}

void Tabla::SumarVictorias( ){
		victorias++;
}