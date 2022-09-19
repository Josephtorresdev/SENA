//ESTRUCTURA DEL LENGUAJE DE PROGRAMACION C++ (NIVEL I)
//Aprendiz Joseph Torres CC ***********

#include <iostream> //Libreria Standard
using namespace std;  //Directiva de compilacion

int main(int argc, char *argv[]) {
	
	int numero;//Unica Variable de tipo entero
	
	do{
		cout<<"Actividad 4 - Evidencia 2: Ejercicio práctico Tablas de multiplicar con ciclos"<<endl;
		cout<<"INGRESE UN NUMERO: ";
		cin>>numero;
		
	}while((numero<1) || (numero>10));
	
	for(int i=1; i<=10; i++){
		cout<<numero<<" * "<<i<<" = "<<numero * i<<endl; //Salida que muestra el resultado
	}
	return 0;
}
