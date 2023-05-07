#ifndef EQUIPO_H
#define EQUIPO_H
#include <iostream>
class Equipo{
	private:
	std::string nombre;
	bool marcado;
	public:
		Equipo( );
		void setNombre(std::string);
	 	std::string getNombre( );
		void setMarcado(bool);
		bool getMarcado( );
};

#endif
