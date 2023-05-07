#include <iostream>
#include "Sorteo.h"
#include "Torneo.h"
#include "Equipo.h"
int main(int argc, char** argv) {
	Sorteo sorteo;
	Torneo torneo;
	std::system("mode con: cols=110 lines=40");
	sorteo.Proceso( );
	torneo.setTorneo(sorteo.getGrupos( ));
	torneo.Copa_Oro( );
	return 0;
}