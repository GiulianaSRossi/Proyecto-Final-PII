/*programa condiciones:
compilar si o si
ejecutar y funcionar bien y respetar las consignas
implementacion: tiene que tener POO, 
herencia y polimorfismo, 
template, control de error (si tiene algun error esta mal),
punteros, 
composicion.
*/

#include <iostream>
#include "administrador.h"
#include "cuentaSueldo.h"
#include "persona.h"
#include "profesional.h"
#include "profesionalCuenta.h"
#include "trabajador.h"
using namespace std;


/*void Trabajador::Datos() {
	cout << "Nombre: " << get_nombre()<< endl;
	
	cout << "Apellido: " << get_apellido()<< endl;
	
	cout << "DNI: " << get_dni()<< endl;
	
	cout << "Numero de empleado: " << get_numeroEmpleado()<< endl;
	
	cout << "Salario: " << get_salario()<< endl;
	
	cout << "Profesion: " << get_profesion()<< endl;
}
*/
void menu();
void agregarEmpleado(string, string, int, int, float, string, Trabajador *);
void validarDNI(int);
void validarNumEmpleado(int);
void validarSalario(float);
void limpiarPantalla ();

int main()
{
	system("Color E0");
	
	string nom;
	string ap;
	//string buscarNom;
	int d;
	int numE;
	float s;
	string p;
	
	menu ();
	int opcion;
	
	do {
		cout << "SELECCIONE UNA OPCION DEL MENU: " << endl;
		cin >> opcion;
		
		switch(opcion){
		case 1:
			cout << "-LISTA DE EMPLEADOS-" << endl;
			break;
			
		case 2:
			cout << "AGREGAR EMPLEADO" << endl;
			agregarEmpleado(nom, ap, d, numE, s, p, *array [100]);
			//ERROR ACA EL ARRAY NO FUNCINA cout<<array[0]->get_apellido()
			break;
			
		case 3:
			cout << "ELIMINAR EMPLEADO" << endl;
			break;
			
		case 4:
			cout << "DATOS DEL EMPLEADO" << endl;
			cout << "Ingrese el nombre del empleado: ";
			//cin >> busacarNom;
			cout << endl;
			break;
			
		case 5:
			cout<< "SALIR" << endl;
			break;
			
		default: 
			cout << "LA OPCION INTRODUCIDA NO ES VALIDA, INTENTE NUEVAMENTE";
			break;
		}
		
	} while(opcion!=5);
	return 0;
}
void limpiarPantalla (){
	if (system("CLS")) system("clear");
}
void menu() {
	limpiarPantalla();
	cout << "MENU DE OPCIONES" << endl;
	cout << "1- LISTA DE EMPLEADOS" << endl;
	cout << "2- AGREGAR EMPLEADO" << endl;
	cout << "3- ELIMINAR EMPLEADO" << endl;
	cout << "4- DATOS DELEMPLEADO" << endl;
	cout << "5- SALIR" << endl;
}

