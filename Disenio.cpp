#include "Disenio.h"

void Ventana::gotoxy(int x,int y){
	HANDLE hcon;  
     hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
     COORD dwPos;  
     dwPos.X = x;  
     dwPos.Y= y;  
     SetConsoleCursorPosition(hcon,dwPos);  
}
void Ventana::colores( ){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	 for(int i=0;i<243;i++){
	 	 SetConsoleTextAttribute(hConsole,i);
	 	 std::cout<<i<<" COLOR"<<std::endl;
	 }

}
void Ventana::musica( ){
	PlaySound("Cancion.wav", NULL,SND_ASYNC | SND_LOOP);
	
}
void Ventana::detener( ){
	PlaySound(NULL, NULL, 0);
}
