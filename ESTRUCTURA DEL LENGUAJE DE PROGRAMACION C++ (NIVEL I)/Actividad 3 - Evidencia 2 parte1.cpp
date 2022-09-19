//ESTRUCTURA DEL LENGUAJE DE PROGRAMACION C++ (NIVEL I)
//Aprediz Joseph Torres CC *******
 
#include <iostream> //Libreria Standard
#include <stdlib.h> //Libreria Standard
#include <math.h>
#include <string>

using namespace std; //Directiva de compilacion
int main()
{
	//Declaracion de Variables
	int talla=0, costo=0, cantidad=0; 
	float costototal=0, preciototal=0, utilidad=0, utilidadtotal=0, porcentaje=0, precio=0;
	char tipo;

	string referencia, descripcion, disponible;
	
	cout<<"Actividad 3 - Evidencia 2: Estudio de Caso Incorporar estatutos IF anidado y SWITCH"<<endl;
	
	cout<<"ADMISTRAR VENTA DE ZAPATOS"<<endl;
	
	cout<<"Digite la referencia del Zapato"<<endl;
	cin>>referencia;
	
	cout<<"Digite la descripcion del Zapato"<<endl;
	cin>>descripcion;
	
	cout<<"Digite la talla"<<endl;
	cin>>talla;
	
	cout<<"Digite si esta disponible"<<endl;
	cin>>disponible;
	
	cout<<"Digite cantidad de Zapatos"<<endl;
	cin>>cantidad;
	
	cout<<"Digite el costo"<<endl;
	cin>>costo;

	
	
	
	system("cls");
	
	cout<<"RESULTADOS OBTENIDOS"<<endl;
	
	cout<<"REFERENCIA:";
	cout<<referencia<<endl;
	
	cout<<"TIPO:";
		
	
		if (costo <= 30000){
		tipo = 'A';
	}
		else{
			if (costo >30000&&costo<=59999){
				tipo = 'B';
			}
			else{
				if (costo >= 60000){
					tipo = 'C';
				}
			}
		}
	
	cout<<tipo<<endl;
	
	cout<<"DECSCRIPCION:";
	cout<<descripcion<<endl;
	
	cout<<"TALLA:";
	cout<<talla<<endl;
	
	cout<<"DISPONIBLE:";
	cout<<disponible<<endl;
	
	cout<<"CANTIDAD DE ZAPATOS:";
	cout<<cantidad<<endl;
	
	cout<<"COSTO UNIDAD:";
	cout<<costo<<endl;
	
	cout<<"COSTO TOTAL:";
	costototal = costo * cantidad;
	cout<<costototal<<endl;
	
	cout<<"PRECIO UNIDAD:";
		if (costo <= 30000){
		 precio = (costo * 0.5) + costo;
	}
		else{
			if (costo >30000&&costo<=59999){
				precio = (costo * 0.4) + costo;
			}
			else{
				if (costo >60000){
					precio = (costo * 0.3) + costo;
				}
			}
		}
	cout<<precio<<endl;
	
	cout<<"PRECIO TOTAL:";
	preciototal = precio * cantidad;
	cout<<preciototal<<endl;
	
	cout<<"UTILIDAD POR UNIDAD:";
	utilidad = precio - costo;
	cout<<utilidad<<endl;
	
	cout<<"UTILIDAD TOTAL:";
	utilidadtotal = utilidad * cantidad;
	cout<<utilidadtotal <<endl;
	
	cout<<"PORCENTAJE DE UTILIDAD:";
	if (costo <= 30000){
		cout<<"50%"<<endl;
	}
		else{
			if (costo >30000&&costo<=59999){
				cout<<"40%"<<endl;
			}
			else{
				if (costo >60000){
					cout<<"30%"<<endl;
				}
			}
		}
	
	cout<< "Aprediz Joseph Torres CC 1044940072"<<endl;
	
	system("pause");
	return 0;
}
	
 
