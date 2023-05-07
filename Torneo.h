#ifndef TORNEO_H
#define TORNEO_H
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Tabla.h"
#include "Equipo.h"
#include "Disenio.h"
#include "windows.h"
#include "Partidos.h"
#define TAM 4
#define MAX 2
#define COL 8
#define REN 3
class Torneo:public Ventana{
	private:
		Tabla grupos[TAM][TAM];
		Cantidad fgrupos[REN][COL];
		Cantidad cuartos[TAM];
		Cantidad semifinal[MAX];
		Cantidad final[MAX];
		char letras[TAM];
		int index;
		int rango;
		int golesA;
		int golesB;
		int goles;
		bool confirmar;	
	public:
		Torneo( );
		void setTorneo(Equipo**);
		void MostrarTablas( );
		void GenerarPartidos( );
		void MostrarPartidos( );
		void FaseGrupos( );
		void incrementar();
		void Ordenar( );
		void CuartosFinal( );
		void SemiFinal( );
		void Final( );	
		void MostrarCuartosFinal( );
		void CuartosPartidos( );	
		void MostrarSemiFinal( );
		void SemiFinalPartidos( );	
		void MostrarFinal( );
		void MotrarTercerLugar( );		
		void TercerLugarPartidos( );
		void FinalPartidos( );
		void Copa_Oro( );
		void Menu( );
		void Opciones( );
		
};

#endif
