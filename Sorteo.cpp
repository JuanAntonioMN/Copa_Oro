#include "Sorteo.h"
Sorteo::Sorteo( ){
	nombreEquipo=0;
	tipoGrupo=0;
	posicionGrupo=0;
	setBombos( );
	setGrupos( );
	
	for(int i=0;i<TAM;i++){
		for(int j=0;j<TAM;j++){
		//Seteamos en true o false si esta o no ocupado
			if(i!=0){
			repetidos[i][j]=false;
			}
			else{
				repetidos[i][j]=true;
			}
		}
	}
	//Inicializamos las variables del sorteo
	letra[0]='A';
	letra[1]='B';
	letra[2]='C';
	letra[3]='D';
	
}
void Sorteo::setBombos( ){
	bombos=new Equipo*[TAM];
	for(int i=0;i<TAM;i++){
		bombos[i]=new Equipo[TAM];
	}
	for(int i=0;i<TAM;i++){
		for(int j=0;j<TAM;j++){
			//Inicializamos las variables de bombos
			if(i!=0){
			bombos[i][j].setNombre(" ");
			bombos[i][j].setMarcado(false);
			}
			else{
			bombos[i][j].setNombre(" ");
			bombos[i][j].setMarcado(true);
			}
		}
	}
}

void Sorteo::setGrupos( ){
	grupos=new Equipo*[TAM];
	for(int i=0;i<TAM;i++){
		grupos[i]=new Equipo[TAM];
	}
	for(int i=0;i<TAM;i++){
		for(int j=0;j<TAM;j++){
			//Inicializamos las variables de grupos
			grupos[i][j].setNombre(" ");
			grupos[i][j].setMarcado(false);
		}
	}
	grupos[0][0].setNombre("ESTADOS UNIDOS");
	grupos[0][0].setMarcado(true);
	grupos[1][0].setNombre("MEXICO");
	grupos[1][0].setMarcado(true);
	
	grupos[2][0].setNombre("COSTA RICA");
	grupos[2][0].setMarcado(true);
	grupos[3][0].setNombre("CANADA");
	grupos[3][0].setMarcado(true);
}

Equipo **Sorteo::getBombos( ){
	return bombos;
}

Equipo **Sorteo::getGrupos( ){
	return grupos;
}


void Sorteo::LlenarBombo( ){
	bombos[0][0].setNombre("ESTADOS UNIDOS");
	bombos[0][1].setNombre("MEXICO");
	bombos[0][2].setNombre("CANADA");
	bombos[0][3].setNombre("COSTA RICA");
	
	bombos[1][0].setNombre("PANAMA");
	bombos[1][1].setNombre("JAMAICA");
	bombos[1][2].setNombre("HAITI");
	bombos[1][3].setNombre("GUATEMALA");
	
	bombos[2][0].setNombre("CUBA");
	bombos[2][1].setNombre("EL SALVADOR");
	bombos[2][2].setNombre("HONDURAS");
	bombos[2][3].setNombre("NICARAGUA");
	
	bombos[3][0].setNombre("QATAR");
	bombos[3][1].setNombre("PRELIMS 7");
	bombos[3][2].setNombre("PRELIMS 8");
	bombos[3][3].setNombre("PRELIMS 9");
	
}
void Sorteo::MostrarBombos( int i){

		gotoxy(0,4);std::cout<<"- - - BOMBO "<<i+1<<" - - -";
		
		for(int j=0;j<TAM;j++){
			gotoxy(1,4+2*j);std::cout<<bombos[i][j].getNombre( )<<std::endl;	
		}

}
void Sorteo::PintarMarcados( ){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole,15);
	gotoxy(40,4);std::cout<<"- - - - B O M B O S - - - - ";
	for(int i=0;i<TAM;i++){
		SetConsoleTextAttribute(hConsole,30);
		gotoxy(12+22*i,6);std::cout<<"- - - BOMBO "<<i+1<<" - - -";
		for(int j=0;j<TAM;j++){
			
			if(bombos[i][j].getMarcado( )==true){
			SetConsoleTextAttribute(hConsole,78);
			gotoxy(12+22*i,8+2*j);std::cout<<bombos[i][j].getNombre( );
			}
			else{
			SetConsoleTextAttribute(hConsole,15);
			gotoxy(12+22*i,8+2*j);std::cout<<bombos[i][j].getNombre( );
			}
		
		}
		
	}

}
void Sorteo::MostrarGrupos( ){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole,14);
	gotoxy(40,24);std::cout<<"- - - - G R U P O S - - - - ";
	for(int i=0;i<TAM;i++){
		SetConsoleTextAttribute(hConsole,31);
		gotoxy(12+22*i,26);std::cout<<"- - - GRUPO "<<letra[i]<<" - - - ";
		
		for(int j=0;j<TAM;j++){
			if(grupos[i][j].getMarcado( )==true){
			SetConsoleTextAttribute(hConsole,79);
			gotoxy(12+22*i,28+2*j);std::cout<<j+1<<" "<<grupos[i][j].getNombre( );
			}
			else{
			SetConsoleTextAttribute(hConsole,15);
			gotoxy(12+22*i,28+2*j);std::cout<<j+1<<" "<<grupos[i][j].getNombre( );
			}
			
		}
		
	}
}

void Sorteo::Proceso( ){
	srand(time(NULL));
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO info;
	info.dwSize = 100;
	info.bVisible = FALSE;
	
	int j;
	LlenarBombo( );
	musica( );
	for(int i=1;i<TAM;i++){//Este ciclo recorre los bombos 
		system("cls");
		
		std::system("color 0F");
	  	SetConsoleTextAttribute(hConsole,14);
	  	SetConsoleCursorInfo(consoleHandle, &info);
	  	gotoxy(35,0);std::cout<<" - - - - - - - - - - - - - - - - - - -";
		gotoxy(35,1);std::cout<<" S O R T E O  C O P A  O R O  2 0 2 3 ";
		gotoxy(35,2);std::cout<<" - - - - - - - - - - - - - - - - - - -";
		
		j=0;
		PintarMarcados( );
		MostrarGrupos( );
		while(j<TAM){//Este ciclo funciona para insertar los equipos de cada bombo en un grupo
		SetConsoleTextAttribute(hConsole,14);
			nombreEquipo=rand( )%TAM;//Genera un numero aletorio entre 0 y 3 el cual sera para seleccionar un nombre del equipo
			
			if(bombos[i][nombreEquipo].getMarcado( )==false){//En caso de que el equipo no este seleccionado se mete a esta condicion
				
				tipoGrupo=rand( )%TAM;//Se genera un numero aleatorio entre 0 y 3 para Seleccionar el grupo en el cual estara el equipo
				posicionGrupo=rand( )%TAM;//Se genera un numero aleatorio entre 0 y 3 para Seleccionar la posicion dentro del grupo
				if(repetidos[i][tipoGrupo]==false){//Es condicion valida que cada grupo obtenga un equipo por bombo 1 y solo 1 sin que se repita
					
				
					 if(grupos[tipoGrupo][posicionGrupo].getMarcado( )==false){//Si la posicion de grupo no esta ocupado modificamos la posicion
					 
						 grupos[tipoGrupo][posicionGrupo].setNombre(bombos[i][nombreEquipo].getNombre( ));//Agregamos el nombre del equipo del bombo y su posicion
						 grupos[tipoGrupo][posicionGrupo].setMarcado(true);//Modificamos en true que la posicion de ese grupo ya esta ocupado
						 bombos[i][nombreEquipo].setMarcado(true);//Modificamos en true que la posicion del nombre del equipo ya fue seleccionado			
						 repetidos[i][tipoGrupo]=true;	
						 
						 
						 gotoxy(30,18);std::cout<<"                                                                       ";
						 gotoxy(30,17);std::cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - -";
						 gotoxy(35,18);std::cout<<"SELECCIONANDO EQUIPO DEL BOMBO "<<i+1<<" . . .";
						 gotoxy(30,19);std::cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - -";
						 Sleep(4000);
						 
						 gotoxy(30,18);std::cout<<"                                                                       ";
						 gotoxy(35,18);std::cout<<bombos[i][nombreEquipo].getNombre( )<<" SE POSICIONA EN EL GRUPO "<<letra[tipoGrupo];
						 Sleep(4000);
						 
						 gotoxy(30,18);std::cout<<"                                                                       ";
						 gotoxy(30,18);std::cout<<"SELECCIONANDO SU POSICION DENTRO DEL GRUPO "<<letra[tipoGrupo]<<" . . .";
						 Sleep(4000);
						 
						 gotoxy(30,18);std::cout<<"                                                                       ";
						 gotoxy(30,18);std::cout<<"LA POSICION DE "<<bombos[i][nombreEquipo].getNombre( )<<" EN EL GRUPO "<<letra[tipoGrupo]<<" ES EL "<<posicionGrupo+1;
						 Sleep(4000);
						 j++;
						 
					 }		
			
				}
			}		
		PintarMarcados( );
		MostrarGrupos( );
		}
		
	}
	gotoxy(30,18);std::cout<<"                                                                       ";
	gotoxy(30,17);std::cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - -";
	gotoxy(40,18);std::cout<<"F I N  D E L  S O R T E O";
	gotoxy(30,19);std::cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - -";
	gotoxy(30,36);std::cout<<"SE APROXIMA EL TORNEO DE LA COPA ORO 2023 ";
	gotoxy(40,38);std::cout<<"ENTER PARA CONTINUAR > > > ";
	getchar( );
	
	
}

Sorteo::~Sorteo( ){
	if(bombos!=NULL && grupos!=NULL){
		
		for(int i=0;i<TAM;i++){
			delete[] bombos[i];
			delete[] grupos[i];
		}
		delete[] bombos;
		delete[] grupos;
	}
}