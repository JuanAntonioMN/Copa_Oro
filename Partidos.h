#ifndef PARTIDOS_H
#define PARTIDOS_H
#include <iostream>
class Cantidad{
	std::string nombre1;
	std::string nombre2;
	int goles1;
	int goles2;
	int x1;
	int y1;
	int x2;
	int y2;
	public:
	Cantidad( );
	void setNombre1(std::string);
	std::string getNombre1( );
	void setGoles1(int);
	int getGoles1( );
	
	void setNombre2(std::string);
	std::string getNombre2( );
	void setGoles2(int);
	int getGoles2( );
	
	void setx1(int);
	int getx1( );
	void sety1(int);
	int gety1( );
	
	void setx2(int);
	int getx2( );
	void sety2(int);
	int gety2( );
};

#endif
