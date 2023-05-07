#ifndef TABLA_H
#define TABLA_H
#include <iostream>
#include "Equipo.h"
class Tabla: public Equipo{
	private:
		int cantidadP;
		int victorias;
		int empates;
		int derrotas;
		int puntos;
		int goles;
	public:
		Tabla( );
		void setCantidadP(int);
		int getCantidadP( );
		
		void setVictorias(int);
		int getVictorias( );
		
		void setEmpates(int);
		int getEmpates( );
		
		void setDerrotas(int);
		int getDerrotas( );
		
		void setPuntos(int);
		int getPuntos( );
		
		void setGoles(int);
		int getGoles( );
		
		void setGrupo(int);
		int getGrupo( );
		
		void setPosicion(int);
		int getPosicion( );
		
		void SumarPuntos(int);
		void OperarGoles(int,int);
		void SumarJuegos( );
		void SumarDerrotas( );
		void SumarEmpates( );
		void SumarVictorias( );
};

#endif
