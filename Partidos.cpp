#include "Partidos.h"

Cantidad::Cantidad( ){
	nombre1=" ";
	nombre2=" ";
	goles1=0;
	goles2=0;
	x1=0;
	y1=0;
	x2=0;
	y2=0;
}

void Cantidad::setNombre1(std::string nombre){
	this->nombre1=nombre;
}

std::string Cantidad::getNombre1( ){
	return nombre1;
}

void Cantidad::setGoles1(int goles){
	this->goles1=goles;
}

int Cantidad::getGoles1( ){
	return goles1;
}

void Cantidad::setNombre2(std::string nombre){
	this->nombre2=nombre;
}

std::string Cantidad::getNombre2( ){
	return nombre2;
}

void Cantidad::setGoles2(int goles){
	this->goles2=goles;
}

int Cantidad::getGoles2( ){
	return goles2;
}

void Cantidad::setx1(int x){
	this->x1=x;
}
int Cantidad::getx1( ){
	return x1;
}
void Cantidad::sety1(int y){
	this->y1=y;
}
int Cantidad::gety1( ){
	return y1;
}

void Cantidad::setx2(int x){
	this->x2=x;
}
int Cantidad::getx2( ){
	return x2;
}
void Cantidad::sety2(int y){
	this->y2=y;
}
int Cantidad::gety2( ){
	return y2;
}