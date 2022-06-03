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
using namespace std;

class Trabajador{
	
protected:
//especifica el acceso a los miembros de clase de la lista 
//hasta el siguiente especificador
	string nombre;
	string apellido;
	int dni;
	int numeroEmpleado;
	float salario;
	string profesion;
	
public:
	Trabajador (string, string, int, int, float, string);
	
	string get_nombre();
	string get_apellido();
	int get_dni();
	int get_numeroEmpleado();
	float get_salario();
	string get_profesion();
	
	void set_nombre(string);
	void set_apellido(string);
	void set_dni(int);
	void set_numeroEmpleado(int);
	void set_salario(float);
	void set_profesion(string);
	
	void mostrarDatos();
};

Trabajador::Trabajador(string nom, string ap, int d, int numE, float s, string p) {
	nombre = nom;
	apellido = ap;
	dni = d;
	numeroEmpleado = numE;
	salario = s;
	profesion = p;
}

string Trabajador::get_nombre() {
	return nombre;
}
string Trabajador::get_apellido() {
	return apellido;
}
int Trabajador::get_dni() {
	return dni;
}
int Trabajador::get_numeroEmpleado() {
	return numeroEmpleado;
}
float Trabajador::get_salario() {
	return salario;
}
string Trabajador::get_profesion() {
	return profesion;
}

void Trabajador::set_nombre(string nom) {
	nombre=nom;
}
void Trabajador::set_apellido(string ap) {
	apellido=ap;
}
void Trabajador::set_dni(int DNI) {
	dni=DNI;
}
void Trabajador::set_numeroEmpleado(int nmrEm) {
	numeroEmpleado=nmrEm;
}
void Trabajador::set_salario(float slr) {
	salario=slr;
}
void Trabajador::set_profesion(string prof) {
	profesion=prof;
}

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

