#ifndef SORTEO_H
#define SORTEO_H
#include <windows.h>
#include "Disenio.h"
#include <stdlib.h>
#include <iostream>
#include "Equipo.h"
#include <time.h>
#define TAM 4

class Sorteo:public Ventana{
	private:
		 int nombreEquipo;
		 int tipoGrupo;
		 int posicionGrupo;
		 char letra[TAM];
		 bool repetidos[TAM][TAM];
		 Equipo **bombos;
		 Equipo **grupos;
	public:
		Sorteo( );
		void LlenarBombo( );
		void MostrarBombos( int );
		void MostrarGrupos( );
		void Proceso( );
		void PintarMarcados( );
		void setBombos( );
		Equipo** getBombos( );
		void setGrupos( );
		Equipo** getGrupos( );
		~Sorteo( );
};

#endif
