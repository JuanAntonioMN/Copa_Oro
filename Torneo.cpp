#include "Torneo.h"

Torneo::Torneo( ){
	rango=0;
	golesA=0;
	golesB=0;
	index=0;
	goles=0;
	letras[0]='A';
	letras[1]='B';
	letras[2]='C';
	letras[3]='D';	
	confirmar=false;
}
void Torneo::setTorneo(Equipo **equipos){
	for(int i=0;i<TAM;i++){
		for(int j=0;j<TAM;j++){
			grupos[i][j].setNombre(equipos[i][j].getNombre( ));
			grupos[i][j].setCantidadP(0);
			grupos[i][j].setDerrotas(0);
			grupos[i][j].setEmpates(0);
			grupos[i][j].setGoles(0);
			grupos[i][j].setPuntos(0);
			grupos[i][j].setVictorias(0);
		
		}
		
	}
}

void Torneo::MostrarTablas( ){
	int x=0,y=0;
	std::system("cls");
	std::system("color 0F");
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole,14);
	gotoxy(30,0);std::cout<<"- - - - - - - - - - - - - - - - - - - - - - - -";
	gotoxy(35,2);std::cout<<"T O R N E O  C O P A  O R O  2 0 2 3";
	gotoxy(30,4);std::cout<<"- - - - - - - - - - - - - - - - - - - - - - - -";
	for(int i=0;i<TAM;i++){
		SetConsoleTextAttribute(hConsole,10);
		gotoxy(25+55*x,6+15*y);std::cout<<"GRUPO "<<letras[i];
		gotoxy(2+55*x,8+15*y);std::cout<<"EQUIPO";
		gotoxy(18+55*x,8+15*y);std::cout<<"P_J";
		gotoxy(23+55*x,8+15*y);std::cout<<"P_G";
		gotoxy(28+55*x,8+15*y);std::cout<<"P_E";
		gotoxy(33+55*x,8+15*y);std::cout<<"P_P";
		gotoxy(38+55*x,8+15*y);std::cout<<"GOLES";
		gotoxy(45+55*x,8+15*y);std::cout<<"PUNTOS";

		for(int j=0;j<TAM;j++){
				
				gotoxy(2+55*x,(10+2*j)+15*y);std::cout<<j+1<<" "<<grupos[i][j].getNombre( );
				gotoxy(20+55*x,(10+2*j)+15*y);std::cout<<grupos[i][j].getCantidadP( );
				gotoxy(25+55*x,(10+2*j)+15*y);std::cout<<grupos[i][j].getVictorias( );
				gotoxy(30+55*x,(10+2*j)+15*y);std::cout<<grupos[i][j].getEmpates( );
				gotoxy(35+55*x,(10+2*j)+15*y);std::cout<<grupos[i][j].getDerrotas( );
				gotoxy(40+55*x,(10+2*j)+15*y);std::cout<<grupos[i][j].getGoles( );
				gotoxy(47+55*x,(10+2*j)+15*y);std::cout<<grupos[i][j].getPuntos( );
				gotoxy(4+55*x,(11+2*j)+15*y);std::cout<<"- - - - - - - - - - - - - - - - - - - - - - - -";
				
				
		}	
			
		x++;
		if(i==1){
			x=0;
			y++;
		}	
	}
	SetConsoleTextAttribute(hConsole,15);
	gotoxy(3,34);std::cout<<"P_J: PARTIDOS JUGADOS";
	gotoxy(28,34);std::cout<<"P_G: PARTIDOS GANADOS";
	gotoxy(53,34);std::cout<<"P_E: PARTIDOS EMPATADOS";
	gotoxy(78,34);std::cout<<"P_P: PARTIDOS PERDIDOS";
	if(confirmar){
	gotoxy(40,36);std::cout<<"PRONTO COMIENZA LOS CUARTOS DE FINAL ";
	gotoxy(40,38);std::cout<<"ENTER PARA CONTINUAR > > > ";
	getchar( );
	}
	else{
	gotoxy(40,36);std::cout<<"PRONTO COMIENZA LA JORNADADA "<<index+1;
	gotoxy(40,38);std::cout<<"ENTER PARA CONTINUAR > > > ";
	getchar( );
	}
	
}

void Torneo::GenerarPartidos( ){
			//JORNADA 1
			fgrupos[0][0].setNombre1(grupos[0][0].getNombre( ));
			fgrupos[0][0].setNombre2(grupos[0][1].getNombre( ));
			fgrupos[0][0].setGoles1(0);
			fgrupos[0][0].setGoles2(0);
			fgrupos[0][0].setx1(0);
			fgrupos[0][0].sety1(0);
			fgrupos[0][0].setx2(0);
			fgrupos[0][0].sety2(1);
			
			
			
			fgrupos[0][1].setNombre1(grupos[0][2].getNombre( ));
			fgrupos[0][1].setNombre2(grupos[0][3].getNombre( ));
			fgrupos[0][1].setGoles1(0);
			fgrupos[0][1].setGoles2(0);
			fgrupos[0][1].setx1(0);
			fgrupos[0][1].sety1(2);
			fgrupos[0][1].setx2(0);
			fgrupos[0][1].sety2(3);
			
			fgrupos[0][2].setNombre1(grupos[1][0].getNombre( ));
			fgrupos[0][2].setNombre2(grupos[1][1].getNombre( ));
			fgrupos[0][2].setGoles1(0);
			fgrupos[0][2].setGoles2(0);
			fgrupos[0][2].setx1(1);
			fgrupos[0][2].sety1(0);
			fgrupos[0][2].setx2(1);
			fgrupos[0][2].sety2(1);
			
			fgrupos[0][3].setNombre1(grupos[1][2].getNombre( ));
			fgrupos[0][3].setNombre2(grupos[1][3].getNombre( ));
			fgrupos[0][3].setGoles1(0);
			fgrupos[0][3].setGoles2(0);
			fgrupos[0][3].setx1(1);
			fgrupos[0][3].sety1(2);
			fgrupos[0][3].setx2(1);
			fgrupos[0][3].sety2(3);
			
			fgrupos[0][4].setNombre1(grupos[2][0].getNombre( ));
			fgrupos[0][4].setNombre2(grupos[2][1].getNombre( ));
			fgrupos[0][4].setGoles1(0);
			fgrupos[0][4].setGoles2(0);
			fgrupos[0][4].setx1(2);
			fgrupos[0][4].sety1(0);
			fgrupos[0][4].setx2(2);
			fgrupos[0][4].sety2(1);
			
			fgrupos[0][5].setNombre1(grupos[2][2].getNombre( ));
			fgrupos[0][5].setNombre2(grupos[2][3].getNombre( ));
			fgrupos[0][5].setGoles1(0);
			fgrupos[0][5].setGoles2(0);
			fgrupos[0][5].setx1(2);
			fgrupos[0][5].sety1(2);
			fgrupos[0][5].setx2(2);
			fgrupos[0][5].sety2(3);
			
			fgrupos[0][6].setNombre1(grupos[3][0].getNombre( ));
			fgrupos[0][6].setNombre2(grupos[3][1].getNombre( ));
			fgrupos[0][6].setGoles1(0);
			fgrupos[0][6].setGoles2(0);
			fgrupos[0][6].setx1(3);
			fgrupos[0][6].sety1(0);
			fgrupos[0][6].setx2(3);
			fgrupos[0][6].sety2(1);
			
			
			fgrupos[0][7].setNombre1(grupos[3][2].getNombre( ));
			fgrupos[0][7].setNombre2(grupos[3][3].getNombre( ));
			fgrupos[0][7].setGoles1(0);
			fgrupos[0][7].setGoles2(0);
			fgrupos[0][7].setx1(3);
			fgrupos[0][7].sety1(2);
			fgrupos[0][7].setx2(3);
			fgrupos[0][7].sety2(3);
			
			//JORNADA 2
			fgrupos[1][0].setNombre1(grupos[0][0].getNombre( ));
			fgrupos[1][0].setNombre2(grupos[0][2].getNombre( ));
			fgrupos[1][0].setGoles1(0);
			fgrupos[1][0].setGoles2(0);
			fgrupos[1][0].setx1(0);
			fgrupos[1][0].sety1(0);
			fgrupos[1][0].setx2(0);
			fgrupos[1][0].sety2(2);
			
			fgrupos[1][1].setNombre1(grupos[0][1].getNombre( ));
			fgrupos[1][1].setNombre2(grupos[0][3].getNombre( ));
			fgrupos[1][1].setGoles1(0);
			fgrupos[1][1].setGoles2(0);
			fgrupos[1][1].setx1(0);
			fgrupos[1][1].sety1(1);
			fgrupos[1][1].setx2(0);
			fgrupos[1][1].sety2(3);
			
			fgrupos[1][2].setNombre1(grupos[1][0].getNombre( ));
			fgrupos[1][2].setNombre2(grupos[1][2].getNombre( ));
			fgrupos[1][2].setGoles1(0);
			fgrupos[1][2].setGoles2(0);
			fgrupos[1][2].setx1(1);
			fgrupos[1][2].sety1(0);
			fgrupos[1][2].setx2(1);
			fgrupos[1][2].sety2(2);
			
			fgrupos[1][3].setNombre1(grupos[1][1].getNombre( ));
			fgrupos[1][3].setNombre2(grupos[1][3].getNombre( ));
			fgrupos[1][3].setGoles1(0);
			fgrupos[1][3].setGoles2(0);
			fgrupos[1][3].setx1(1);
			fgrupos[1][3].sety1(1);
			fgrupos[1][3].setx2(1);
			fgrupos[1][3].sety2(3);
			
			fgrupos[1][4].setNombre1(grupos[2][0].getNombre( ));
			fgrupos[1][4].setNombre2(grupos[2][2].getNombre( ));
			fgrupos[1][4].setGoles1(0);
			fgrupos[1][4].setGoles2(0);
			fgrupos[1][4].setx1(2);
			fgrupos[1][4].sety1(0);
			fgrupos[1][4].setx2(2);
			fgrupos[1][4].sety2(2);
			
			fgrupos[1][5].setNombre1(grupos[2][1].getNombre( ));
			fgrupos[1][5].setNombre2(grupos[2][3].getNombre( ));
			fgrupos[1][5].setGoles1(0);
			fgrupos[1][5].setGoles2(0);
			fgrupos[1][5].setx1(2);
			fgrupos[1][5].sety1(1);
			fgrupos[1][5].setx2(2);
			fgrupos[1][5].sety2(3);
		
			fgrupos[1][6].setNombre1(grupos[3][0].getNombre( ));
			fgrupos[1][6].setNombre2(grupos[3][2].getNombre( ));
			fgrupos[1][6].setGoles1(0);
			fgrupos[1][6].setGoles2(0);
			fgrupos[1][6].setx1(3);
			fgrupos[1][6].sety1(0);
			fgrupos[1][6].setx2(3);
			fgrupos[1][6].sety2(2);
			
			fgrupos[1][7].setNombre1(grupos[3][1].getNombre( ));
			fgrupos[1][7].setNombre2(grupos[3][3].getNombre( ));
			fgrupos[1][7].setGoles1(0);
			fgrupos[1][7].setGoles2(0);
			fgrupos[1][7].setx1(3);
			fgrupos[1][7].sety1(1);
			fgrupos[1][7].setx2(3);
			fgrupos[1][7].sety2(3);
			
			//JORNADA 3
			fgrupos[2][0].setNombre1(grupos[0][0].getNombre( ));
			fgrupos[2][0].setNombre2(grupos[0][3].getNombre( ));
			fgrupos[2][0].setGoles1(0);
			fgrupos[2][0].setGoles2(0);
			fgrupos[2][0].setx1(0);
			fgrupos[2][0].sety1(0);
			fgrupos[2][0].setx2(0);
			fgrupos[2][0].sety2(3);
			
			fgrupos[2][1].setNombre1(grupos[0][1].getNombre( ));
			fgrupos[2][1].setNombre2(grupos[0][2].getNombre( ));
			fgrupos[2][1].setGoles1(0);
			fgrupos[2][1].setGoles2(0);
			fgrupos[2][1].setx1(0);
			fgrupos[2][1].sety1(1);
			fgrupos[2][1].setx2(0);
			fgrupos[2][1].sety2(2);
	
			
			fgrupos[2][2].setNombre1(grupos[1][0].getNombre( ));
			fgrupos[2][2].setNombre2(grupos[1][3].getNombre( ));
			fgrupos[2][2].setGoles1(0);
			fgrupos[2][2].setGoles2(0);
			fgrupos[2][2].setx1(1);
			fgrupos[2][2].sety1(0);
			fgrupos[2][2].setx2(1);
			fgrupos[2][2].sety2(3);
			
			fgrupos[2][3].setNombre1(grupos[1][1].getNombre( ));
			fgrupos[2][3].setNombre2(grupos[1][2].getNombre( ));
			fgrupos[2][3].setGoles1(0);
			fgrupos[2][3].setGoles2(0);
			fgrupos[2][3].setx1(1);
			fgrupos[2][3].sety1(1);
			fgrupos[2][3].setx2(1);
			fgrupos[2][3].sety2(2);
			
			fgrupos[2][4].setNombre1(grupos[2][0].getNombre( ));
			fgrupos[2][4].setNombre2(grupos[2][3].getNombre( ));
			fgrupos[2][4].setGoles1(0);
			fgrupos[2][4].setGoles2(0);
			fgrupos[2][4].setx1(2);
			fgrupos[2][4].sety1(0);
			fgrupos[2][4].setx2(2);
			fgrupos[2][4].sety2(3);
			
			fgrupos[2][5].setNombre1(grupos[2][1].getNombre( ));
			fgrupos[2][5].setNombre2(grupos[2][2].getNombre( ));
			fgrupos[2][5].setGoles1(0);
			fgrupos[2][5].setGoles2(0);
			fgrupos[2][5].setx1(2);
			fgrupos[2][5].sety1(1);
			fgrupos[2][5].setx2(2);
			fgrupos[2][5].sety2(2);
			
			fgrupos[2][6].setNombre1(grupos[3][0].getNombre( ));
			fgrupos[2][6].setNombre2(grupos[3][3].getNombre( ));
			fgrupos[2][6].setGoles1(0);
			fgrupos[2][6].setGoles2(0);
			fgrupos[2][6].setx1(3);
			fgrupos[2][6].sety1(0);
			fgrupos[2][6].setx2(3);
			fgrupos[2][6].sety2(3);
			
			fgrupos[2][7].setNombre1(grupos[3][1].getNombre( ));
			fgrupos[2][7].setNombre2(grupos[3][2].getNombre( ));
			fgrupos[2][7].setGoles1(0);
			fgrupos[2][7].setGoles2(0);
			fgrupos[2][7].setx1(3);
			fgrupos[2][7].sety1(1);
			fgrupos[2][7].setx2(3);
			fgrupos[2][7].sety2(2);
			
}

void Torneo::MostrarPartidos( ){
	std::system("cls");
	std::system("color 0F");
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole,14);
	gotoxy(30,0);std::cout<<"- - - - - - - - - - - - - - - - - - - - - - - -";
	gotoxy(35,2);std::cout<<"T O R N E O  C O P A  O R O  2 0 2 3";
	gotoxy(30,4);std::cout<<"- - - - - - - - - - - - - - - - - - - - - - - -";
	SetConsoleTextAttribute(hConsole,15);
		gotoxy(48,6);std::cout<<"JORNDADA "<<index+1;
		gotoxy(20,8);std::cout<<"EQUIPO ";
		gotoxy(40,8);std::cout<<"GOLES ";
		gotoxy(60,8);std::cout<<"GOLES ";
		gotoxy(80,8);std::cout<<"EQUIPO ";
	
		for(int j=0;j<COL;j++){
			
			gotoxy(20,(10+2*j));std::cout<<fgrupos[index][j].getNombre1( );
			gotoxy(40,(10+2*j));std::cout<<fgrupos[index][j].getGoles1( );
			gotoxy(50,(10+2*j));std::cout<<" VS ";
			gotoxy(60,(10+2*j));std::cout<<fgrupos[index][j].getGoles2( );
			gotoxy(80,(10+2*j));std::cout<<fgrupos[index][j].getNombre2( );
			Sleep(2000);	
		}
	
	gotoxy(40,36);std::cout<<"ENTER PARA CONTINUAR > > > ";
	getchar( );
}
void Torneo::incrementar( ){
	
	if(index==2){
		confirmar=true;
	}
	else{
		index++;	
	}	
}
void Torneo::FaseGrupos( ){
	srand(time(NULL));
	rango=rand( )%10+1;
	int a=0,b=0,c=0,d=0;

		for(int j=0;j<COL;j++){
			
			golesA=rand( )%rango;
			golesB=rand( )%rango;
			fgrupos[index][j].setGoles1(golesA);
			fgrupos[index][j].setGoles2(golesB);
			
			a=fgrupos[index][j].getx1( );
			b=fgrupos[index][j].gety1( );
			
			c=fgrupos[index][j].getx2( );
			d=fgrupos[index][j].gety2( );
			
				if(fgrupos[index][j].getGoles1( )==fgrupos[index][j].getGoles2( )){
					
					grupos[a][b].SumarEmpates( );
					grupos[a][b].SumarPuntos(1);
					grupos[a][b].SumarJuegos( );
					
					grupos[c][d].SumarEmpates( );
					grupos[c][d].SumarPuntos(1);
					grupos[c][d].SumarJuegos( );
			
					
				}
				if(fgrupos[index][j].getGoles1( )>fgrupos[index][j].getGoles2( )){
					
					goles=fgrupos[index][j].getGoles1( )-fgrupos[index][j].getGoles2( );
					
					grupos[a][b].SumarVictorias( );
					grupos[a][b].SumarPuntos(3);
					grupos[a][b].SumarJuegos( );
					grupos[a][b].OperarGoles(goles,0);
					
					grupos[c][d].SumarDerrotas( );
					grupos[c][d].SumarPuntos(0);
					grupos[c][d].SumarJuegos( );
					grupos[c][d].OperarGoles(goles,1);
				
				}
				if(fgrupos[index][j].getGoles2( )>fgrupos[index][j].getGoles1( )){
					goles=fgrupos[index][j].getGoles2( )-fgrupos[index][j].getGoles1( );
					
					grupos[c][d].SumarVictorias( );
					grupos[c][d].SumarPuntos(3);
					grupos[c][d].SumarJuegos( );
					grupos[c][d].OperarGoles(goles,0);
					
					grupos[a][b].SumarDerrotas( );
					grupos[a][b].SumarPuntos(0);
					grupos[a][b].SumarJuegos( );
					grupos[a][b].OperarGoles(goles,1);
					

				
				}

		}
			
}


void Torneo::Ordenar( ){
	
	// Ordenar equipos por puntos y goles
	for(int k=0;k<TAM;k++){
		for (int i = 0; i < TAM - 1; i++) {
		    for (int j = 0; j < TAM - i - 1; j++) {
		    	
		        // Comparar los puntos de los equipos
		        if (grupos[k][j].getPuntos( ) < grupos[k][j + 1].getPuntos( ) ) {
		            std::swap(grupos[k][j], grupos[k][j + 1]);
		        }
		        // Si hay empate en los puntos, comparar los goles
		        else if (grupos[k][j].getPuntos( ) == grupos[k][j + 1].getPuntos( ) && grupos[k][j].getGoles( ) < grupos[k][j + 1].getGoles( )) {
		            std::swap(grupos[k][j], grupos[k][j + 1]);
		        }
		        
		    }
		}
	}
	       
	        
}

void Torneo::CuartosFinal( ){
		int j=3;
		for(int i=0;i<TAM;i++){
			cuartos[i].setNombre1(grupos[i][0].getNombre( ));
			cuartos[i].setGoles1(0);
			cuartos[i].setNombre2(grupos[j][1].getNombre( ));
			cuartos[i].setGoles2(0);
			j--;
		}
			
}

void Torneo::MostrarCuartosFinal( ){
	std::system("cls");
	std::system("color 0F");
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole,14);
	gotoxy(30,0);std::cout<<"- - - - - - - - - - - - - - - - - - - - - - - -";
	gotoxy(25,2);std::cout<<"C U A R T O S  D E  F I N A L  C O P A  O R O  2 0 2 3";
	gotoxy(30,4);std::cout<<"- - - - - - - - - - - - - - - - - - - - - - - -";
	SetConsoleTextAttribute(hConsole,15);
	gotoxy(20,6);std::cout<<"EQUIPO ";
	gotoxy(40,6);std::cout<<"GOLES ";
	gotoxy(60,6);std::cout<<"GOLES ";
	gotoxy(80,6);std::cout<<"EQUIPO ";
	for(int i=0;i<TAM;i++){
		gotoxy(20,8+2*i);std::cout<<cuartos[i].getNombre1( );
		gotoxy(40,8+2*i);std::cout<<cuartos[i].getGoles1( );
		gotoxy(50,8+2*i);std::cout<<" VS ";
		gotoxy(60,8+2*i);std::cout<<cuartos[i].getGoles2( );
		gotoxy(80,8+2*i);std::cout<<cuartos[i].getNombre2( );
	}
	gotoxy(40,36);std::cout<<"ENTER PARA CONTINUAR > > > ";
	getchar( );
}

void Torneo::CuartosPartidos( ){
	for(int i=0;i<TAM;i++){
		golesA=rand( )%4;
		golesB=rand( )%4;
		while(golesA==golesB){
		golesA=rand( )%4;
		golesB=rand( )%4;
		}
		cuartos[i].setGoles1(golesA);
		cuartos[i].setGoles2(golesB);	
	}
		
}

void Torneo::SemiFinal( ){
	for(int i=0;i<MAX;i++){
		
		if(cuartos[0+2*i].getGoles1( )>cuartos[0+2*i].getGoles2( )){	//0 2
			semifinal[i].setNombre1(cuartos[0+2*i].getNombre1( ));
			semifinal[i].setGoles1(0);
		}
		else{
			semifinal[i].setNombre1(cuartos[0+2*i].getNombre2( ));
			semifinal[i].setGoles1(0);
		}
		if(cuartos[1+2*i].getGoles1( )>cuartos[1+2*i].getGoles2( )){//1 3
			semifinal[i].setNombre2(cuartos[1+2*i].getNombre1( ));
			semifinal[i].setGoles2(0);
		}
		else{
			semifinal[i].setNombre2(cuartos[1+2*i].getNombre2( ));
			semifinal[i].setGoles2(0);
		}
	
	}
	
	
}

void Torneo::MostrarSemiFinal( ){
	std::system("cls");
	std::system("color 0F");
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole,14);
	gotoxy(30,0);std::cout<<"- - - - - - - - - - - - - - - - - - - - - - - -";
	gotoxy(30,2);std::cout<<"S E M I - F I N A L  C O P A  O R O  2 0 2 3";
	gotoxy(30,4);std::cout<<"- - - - - - - - - - - - - - - - - - - - - - - -";
	SetConsoleTextAttribute(hConsole,15);
	gotoxy(20,6);std::cout<<"EQUIPO ";
	gotoxy(40,6);std::cout<<"GOLES ";
	gotoxy(60,6);std::cout<<"GOLES ";
	gotoxy(80,6);std::cout<<"EQUIPO ";
	for(int i=0;i<MAX;i++){
		gotoxy(20,8+2*i);std::cout<<semifinal[i].getNombre1( );
		gotoxy(40,8+2*i);std::cout<<semifinal[i].getGoles1( );
		gotoxy(50,8+2*i);std::cout<<" VS ";
		gotoxy(60,8+2*i);std::cout<<semifinal[i].getGoles2( );
		gotoxy(80,8+2*i);std::cout<<semifinal[i].getNombre2( );
	}
	gotoxy(40,36);std::cout<<"ENTER PARA CONTINUAR > > > ";
	getchar( );
}

void Torneo::SemiFinalPartidos( ){
	
	for(int i=0;i<MAX;i++){
		golesA=rand( )%4;
		golesB=rand( )%4;
			while(golesA==golesB){
			golesA=rand( )%4;
			golesB=rand( )%4;
			}
		semifinal[i].setGoles1(golesA);
		semifinal[i].setGoles2(golesB);
	}
	
}

void Torneo::Final( ){
	
		if(semifinal[0].getGoles1( )>semifinal[0].getGoles2( )){
			
			final[0].setNombre1(semifinal[0].getNombre1( ));
			final[0].setGoles1(0);
			
			final[1].setNombre1(semifinal[0].getNombre2( ));
			final[1].setGoles1(0);
			
		}
		else{
			final[0].setNombre1(semifinal[0].getNombre2( ));
			final[0].setGoles1(0);
			
			final[1].setNombre1(semifinal[0].getNombre1( ));
			final[1].setGoles1(0);
		}
		
		
		if(semifinal[1].getGoles1( )>semifinal[1].getGoles2( )){
			final[0].setNombre2(semifinal[1].getNombre1( ));
			final[0].setGoles2(0);
			
			final[1].setNombre2(semifinal[1].getNombre2( ));
			final[1].setGoles2(0);
		}
		else{
			final[0].setNombre2(semifinal[1].getNombre2( ));
			final[0].setGoles2(0);
			
			final[1].setNombre2(semifinal[1].getNombre1( ));
			final[1].setGoles2(0);
		}
	
}

void Torneo::MotrarTercerLugar( ){
	std::system("cls");
	std::system("color 0F");
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole,14);
	gotoxy(30,0);std::cout<<"- - - - - - - - - - - - - - - - - - - - - - - -";
	gotoxy(30,2);std::cout<<"T E R C E R  L U G A R   C O P A  O R O  2 0 2 3";
	gotoxy(30,4);std::cout<<"- - - - - - - - - - - - - - - - - - - - - - - -";
	gotoxy(20,6);std::cout<<"EQUIPO ";
	gotoxy(40,6);std::cout<<"GOLES ";
	gotoxy(60,6);std::cout<<"GOLES ";
	gotoxy(80,6);std::cout<<"EQUIPO ";
	SetConsoleTextAttribute(hConsole,15);
	gotoxy(20,8);std::cout<<final[1].getNombre1( );
	gotoxy(40,8);std::cout<<final[1].getGoles1( );
	gotoxy(50,8);std::cout<<" VS ";
	gotoxy(60,8);std::cout<<final[1].getGoles2( );
	gotoxy(80,8);std::cout<<final[1].getNombre2( );
	gotoxy(40,36);std::cout<<"ENTER PARA CONTINUAR > > > ";
	getchar( );
}

void Torneo::MostrarFinal( ){
	std::system("cls");
	std::system("color 0F");
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole,14);
	gotoxy(30,0);std::cout<<"- - - - - - - - - - - - - - - - - - - - - - - -";
	gotoxy(35,2);std::cout<<"F I N A L  C O P A  O R O  2 0 2 3";
	gotoxy(30,4);std::cout<<"- - - - - - - - - - - - - - - - - - - - - - - -";
	SetConsoleTextAttribute(hConsole,15);
	gotoxy(20,6);std::cout<<"EQUIPO ";
	gotoxy(40,6);std::cout<<"GOLES ";
	gotoxy(60,6);std::cout<<"GOLES ";
	gotoxy(80,6);std::cout<<"EQUIPO ";
	gotoxy(20,8);std::cout<<final[0].getNombre1( );
	gotoxy(40,8);std::cout<<final[0].getGoles1( );
	gotoxy(50,8);std::cout<<" VS ";
	gotoxy(60,8);std::cout<<final[0].getGoles2( );
	gotoxy(80,8);std::cout<<final[0].getNombre2( );
	gotoxy(40,36);std::cout<<"ENTER PARA CONTINUAR > > > ";
	getchar( );
}


void Torneo::FinalPartidos( ){
	golesA=rand( )%3;
	golesB=rand( )%3;
	while(golesA==golesB){
	golesA=rand( )%3;
	golesB=rand( )%3;
	}
	final[0].setGoles1(golesA);
	final[0].setGoles2(golesB);
}

void Torneo::TercerLugarPartidos( ){
	golesA=rand( )%3;
	golesB=rand( )%3;
	while(golesA==golesB){
	golesA=rand( )%3;
	golesB=rand( )%3;
	}
	final[1].setGoles1(golesA);
	final[1].setGoles2(golesB);
}

void Torneo::Copa_Oro( ){
	std::system("cls");
	std::system("color 0F");
	GenerarPartidos( );
	while(confirmar==false){
		MostrarTablas( );
		FaseGrupos( );
		MostrarPartidos( );
		Ordenar( );
		incrementar( );
	}
	MostrarTablas( );
	CuartosFinal( );
	MostrarCuartosFinal( );	
	CuartosPartidos( );
	MostrarCuartosFinal( );
	SemiFinal( );
	MostrarSemiFinal( );
	SemiFinalPartidos( );
	MostrarSemiFinal( );
	Final( );
	MostrarFinal( );
	MotrarTercerLugar( );
	TercerLugarPartidos( );
	MotrarTercerLugar( );
	FinalPartidos( );
	MostrarFinal( );
	Menu( );
}

void Torneo::Menu( ){
	int opcion;
	do{
	std::system("cls");
	std::system("color 0F");
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole,14);
	gotoxy(30,0);std::cout<<"- - - - - - - - - - - - - - - - - - - - - - - -";
	gotoxy(35,2);std::cout<<"T O R N E O  C O P A  O R O  2 0 2 3";
	gotoxy(30,4);std::cout<<"- - - - - - - - - - - - - - - - - - - - - - - -";
	SetConsoleTextAttribute(hConsole,15);
	gotoxy(35,8);std::cout<<"1-FASE DE GRUPOS DE LA COPA ORO 2023";
	gotoxy(35,10);std::cout<<"2-CUARTOS DE FINAL DE LA COPA ORO 2023";
	gotoxy(35,12);std::cout<<"3-SEMI-FINAL DE LA COPA ORO 2023";
	gotoxy(35,14);std::cout<<"4-TERCER LUGAR LA COPA ORO 2023";
	gotoxy(35,16);std::cout<<"5-FINAL DE LA COPA ORO 2023";
	gotoxy(35,18);std::cout<<"6-PARTIDOS DE LA COPA ORO 2023";
	gotoxy(35,20);std::cout<<"7-OPCIONES";
	gotoxy(35,22);std::cout<<"0-SALIR DEL SISTEMA";
	gotoxy(35,24);std::cout<<"MI OPCION: ";
	std::cin>>opcion;
		switch(opcion){
		
			case 1:
				MostrarTablas( );
				getchar( );
			break;
			case 2:
				MostrarCuartosFinal( );
				getchar( );
			break;
			case 3:
				MostrarSemiFinal( );
				getchar( );
			break;
			case 4:
				MotrarTercerLugar( );
				getchar( );
			break;
			case 5:
				MostrarFinal( );
				getchar( );
			break;
			case 6:
				system("cls");
				gotoxy(20,2);std::cout<<"INGRESA LA JORNADA QUE QUIERES VER [1,2,3]: ";
				std::cin>>index;
				if(index>3 || index<0){
					gotoxy(20,6);std::cout<<"JORNADA NO VALIDA";
				}
				else{
				index--;
				MostrarPartidos( );
				getchar( );
				}
	
			
			break;
			case 7:
				Opciones( );
			break;
		}
	
	}while(opcion!=0);
	
}

void Torneo::Opciones( ){
	int opcion;
	do{
	std::system("cls");
	std::system("color 0F");
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole,14);
	gotoxy(30,0);std::cout<<"- - - - - - - - - - - - - - - - - - - - - - - -";
	gotoxy(35,2);std::cout<<"T O R N E O  C O P A  O R O  2 0 2 3";
	gotoxy(30,4);std::cout<<"- - - - - - - - - - - - - - - - - - - - - - - -";
	SetConsoleTextAttribute(hConsole,15);
	gotoxy(35,6);std::cout<<"1-PONER MUSICA";
	gotoxy(35,8);std::cout<<"2-QUITAR MUSICA";
	gotoxy(35,10);std::cout<<"0-REGRESAR";
	gotoxy(35,12);std::cout<<"MI OPCION: ";
	std::cin>>opcion;
		switch(opcion){
			case 1:
				musica( );
			break;
			case 2:
				detener( );
			break;
		}
	
	}while(opcion!=0);
}

