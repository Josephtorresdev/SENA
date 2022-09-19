//ESTRUCTURA DEL LENGUAJE DE PROGRAMACION C++ (NIVEL I)
//Aprediz Joseph Torres CC *****
 
#include <iostream> //Libreria Standard
#include <stdlib.h> //Libreria Standard

using namespace std; //Directiva de compilacion
int main()
{
	//Declaracion de Variables
	int referencia=0, talla=0, costo=0, precio=0;
	char descripcion[50], disponible[50];
	
	cout<<"EVALUACION: Definicion de variables prueba de entrada y salida de datos. Desarrollo de Aplicacion en C++ Parte I"<<endl;
	cuout<<"ADMISTRAR VENTA DE ZAPATOS";
	cout<<"Digite la referencia del Zapato"<<endl;
	cin>>referencia;
	cout<<"Digite la talla"<<endl;
	cin>>talla;
	cout<<"Digite la descripcion del Zapato"<<endl;
	cin>>descripcion;
	cout<<"Digite si esta disponible"<<endl;
	cin>>disponible;
	cout<<"Digite el costo"<<endl;
	cin>>costo;
	cout<<"Digite el precio"<<endl;
	cin>>precio;
	
	cout<<"RESULTADOS OBTENIDOS"<<endl;
	cout<<"REFERENCIA:";
	cout<<referencia<<endl;
	cout<<"TALLA:";
	cout<<talla<<endl;
	cout<<"DEESCRIPCION:";
	cout<<descripcion<<endl;
	cout<<"DISPONIBLE:";
	cout<<disponible<<endl;
	cout<<"COSTO:";
	cout<<costo<<endl;
	cout<<"PRECIO:";
	cout<<precio<<endl;
	
	system("pause");
	return 0;
}
	
